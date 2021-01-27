import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class Testcopy1 {
        public static void main(String[] args) throws IOException {
            FileReader reader = new FileReader("D:\\qq\\阶段学习课件\\C语言课件V3\\test.txt");
            FileWriter out = new FileWriter("D:\\123.txt");
            char[] chars = new char[1024];
            int readCount = 0;
            while((readCount = reader.read(chars))!= -1){
                out.write(chars);
            }
            out.flush();
            reader.close();
            out.close();
        }
}
