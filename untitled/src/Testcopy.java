import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

public class Testcopy {
    public static void main(String[] args) throws IOException {
        FileInputStream fis = new FileInputStream("E:\\Test.txt");
        FileOutputStream fos = new FileOutputStream("D:\\Test.txt");
        byte[]bytes = new byte[1024];
        int readCount = 0;
        while((readCount = fis.read(bytes))!=-1){
            fos.write(bytes,0,readCount);
        }
         fos.flush();
         fis.close();
         fos.flush();
         fos.flush();
    }
}
