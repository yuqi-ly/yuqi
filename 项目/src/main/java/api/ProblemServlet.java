package api;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import problem.Problem;
import problem.ProblemDAO;
import util.HttpUtil;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.io.InputStream;
import java.io.UnsupportedEncodingException;
import java.util.List;

@WebServlet("/problem")
public class ProblemServlet extends HttpServlet {
    private Gson gson =new GsonBuilder().create();
    //用来读取题目列表和题目制定详情
    @Override
    protected void doGet(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        //设置一下resp中的属性
        resp.setStatus(200);
        resp.setContentType("application/json;charset = utf-8");
        //从req对象中尝试读取 id 这个参数
        String id = req.getParameter("id");
        if (id == null || id.equals("")){
            //查找题目列表
            selectAll(resp);
        }else {
            //查找指定题目信息
            selectOne(Integer.parseInt(id),resp);
        }
    }

    private void selectAll(HttpServletResponse resp) throws IOException {
        //1.创建ProblemDAO对象
        ProblemDAO problemDAO = new ProblemDAO();
        //2.查找所有题目
        List<Problem> problems =problemDAO.selectAll();
        //3.把结果包装成JSON格式
        String respString =gson.toJson(problems);
        //4.把结果写给前段
        resp.getWriter().write(respString);

    }
    private void selectOne(int problemId, HttpServletResponse resp) throws IOException {
        //1.创建ProblemDAO对象
        ProblemDAO  problemDAO = new ProblemDAO();
        //2.查找指定的结果
        Problem problem =problemDAO.selectOne(problemId);
        //3.把结果包装成JSON类
        String respString = gson.toJson(problem);
        //4.把结果返回给客户端
        resp.getWriter().write(respString);
    }

    @Override
    protected void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        //1.进行新增一个题目的数据
        //进一步就可以插入数据库
        String body = HttpUtil.readBody(req);
        //2.要读取到请求中的body数据,把读到的数据构造成problem对象
        Problem problem = gson.fromJson(body,Problem.class);
        //3.把数据插入数据库
        ProblemDAO problemDAO = new ProblemDAO();
        problemDAO.insert(problem);
        //4.返回一个结果给客户端
        resp.setStatus(200);
        resp.setContentType("application/json;charset:utf-8");
        resp.getWriter().write("{\"ok\":1}");
    }

    @Override
    protected void doDelete(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        //删除操作
        resp.setStatus(200);
        resp.setContentType("application/json;charset:utf-8");
        //1.先从req请求对象中获取要删除的题目id
        String id = req.getParameter("id");
        if (id == null || id.equals("")){
            resp.getWriter().write("{\"ok\":0,\"reason\":\"id不存在\"}");
            return;
        }
        //2.调用数据库操作执行删除即可
        ProblemDAO problemDAO = new ProblemDAO();
        problemDAO.delete(Integer.parseInt(id));
        resp.getWriter().write("{\"ok\":1}");

        //3.返回一个删除结果
    }


}
