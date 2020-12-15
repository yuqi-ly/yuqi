package Experiment;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
//字符流复制文本文件
public class FileCopyDemo2 {
    public static void main(String[] args) {
        try {
            BufferedReader br=new BufferedReader(new FileReader("D:\\11.java"));
            BufferedWriter bw=new BufferedWriter(new FileWriter("D:\\22.dat"));
            String line=null;
            do {
                line=br.readLine();
                if(null!=line)
                    bw.write(line);
            }
            while(line!=null);
            br.close();bw.close();
            System.out.println("The file was copyed!");
        } catch (IOException e) {

            e.printStackTrace();

        }
    }
}
