package compile;

import java.io.*;

//通过这个类来创建进行，并执行javac，java命令
public class CommendUtil {
    //run方法就用于创建进程并执行命令
    //cmd表示要执行的命令，比如：javac
    //stdoutFile表示标准输出写到哪个文件
    //stderrFile表示标准错误写到哪个文件
    public static int run(String cmd,String stdoutFile,String stderrFile) throws IOException, InterruptedException {
     //一个java程序里，Runtime的实例只有唯一的一个
     //Process对象其实就是用来表示你新创建出来的进程
        Process process =Runtime.getRuntime().exec(cmd);
        //当新的进程跑起来后，就需要获取到新进程的输出结果
        if (stdoutFile!=null){
            InputStream stdoutFrom = process.getInputStream();
            //通过这个对象就可以读取到当前新进程的内容
            FileOutputStream stdoutTo = new FileOutputStream(stdoutFile);
            //接下来从新进程这边依次读取每个字节，写入到stdoutTO这个文件里
            while (true){
                int ch = stdoutFrom.read();
                if (ch==-1){
                    break;
                }
                stdoutTo.write(ch);
            }
            //文件读取完毕，关闭文件
            stdoutFrom.close();
            stdoutTo.close();
        }
        //再对标准错误进行重定向
        if (stderrFile!=null){
            InputStream stderrFrom = process.getErrorStream();
            FileOutputStream stderrTo = new FileOutputStream(stderrFile);
            while (true){
                int ch = stderrFrom.read();
                if (ch==-1){
                    break;
                }
                stderrTo.write(ch);
            }
            stderrFrom.close();
            stderrTo.close();
        }
        //等待新进程结束，获取到退出码
        int exitCode = process.waitFor();
        return exitCode;

    }

    public static void main(String[] args) {
        try {
            int ret = CommendUtil.run("javac","./stdout.txt","./stderr.txt");
        } catch (IOException e) {
            e.printStackTrace();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}
