package Experiment;
import java.io.*;

//字节流复制文本文件
public class FlieCopyOperator {
    public static void main(String[] args) throws IOException {
        String byteFilename = "D:\\11.dat";
        String copyFilename = "D:\\22.dat";
        //创建文件输入流对象
        FileInputStream fin = new FileInputStream(byteFilename);
        //创建文件输出流对象
        FileOutputStream fout = new FileOutputStream(copyFilename, false);
        byte[] buffer = new byte[512];          //字节缓冲区
        int count = 0;
        do {
            count = fin.read(buffer);            //读取输入流
            if (count != -1) {
                fout.write(buffer);               //写入输出流
            }
        } while (count != -1);
        fin.close();                               //关闭输入流
        fout.close();                              //关闭输出流
        System.out.println("Copyfile from " + byteFilename + " to " + copyFilename);
    }
}
