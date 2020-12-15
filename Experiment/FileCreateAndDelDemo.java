package Experiment;

import java.io.File;
import java.io.IOException;

public class FileCreateAndDelDemo {
    public static void main(String[] args) {
        File file = new File("D://Hello.txt"); // 创建一个文件类型对象
        File dir = new File("D://creatDir");
        System.out.println("文件是否存在：" + file.exists());
        System.out.println("文件夹否存在：" + dir.exists());

        if (!file.exists()) {
            try {
                file.createNewFile(); // 如果文件不存在则创建一个新的文件
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        if (!dir.exists()) {
            dir.mkdir(); // 如果文件夹不存在，则创建一个文件夹
        }
        System.out.println("文件是否存在：" + file.exists());
        System.out.println("文件夹否存在：" + dir.exists());
        System.out.println("文件的绝对路径是：" + file.getAbsolutePath());
        System.out.println("文件夹的绝对路径是：" + dir.getAbsolutePath());

        //file.delete(); // 删除文件
        System.out.println("文件是否存在：" + file.exists());
    }
}
