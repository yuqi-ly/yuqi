package test;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class testStream {
    public static void main(String[] args) throws IOException {
        //写文件的操作

        /*FileOutputStream fileOutputStream = new FileOutputStream("d:/test.txt");
        String s = "hello";
        fileOutputStream.write(s.getBytes());
        fileOutputStream.close();*/
        //读文件的操作

        FileInputStream fileInputStream = new FileInputStream("d:/test.txt");
        while (true) {
            int c = fileInputStream.read();
            if(c==-1){
                //c其实就是读取到这个字节
                //如果文件读取完毕了，就会返回-1
                break;
            }
            System.out.println((byte)c);

        }
        fileInputStream.close();
    }
}
