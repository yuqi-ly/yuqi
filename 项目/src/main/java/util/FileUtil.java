package util;


import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

// 使用这个类封装一下 Java 的文件操作.
// 让后面的代码能够更方便的读写整个文件.
public class FileUtil {
    // 从指定的文件中一次把所有的内容读出来
    public static String readFile(String filepath) {
        StringBuilder stringBuilder = new StringBuilder();
        try(FileInputStream fileInputStream =new FileInputStream(filepath)) {
            while (true) {
                int ch = fileInputStream.read();
                if (ch == -1) {
                    break;
                }
                stringBuilder.append((char) ch);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        return stringBuilder.toString();
    }

    //把content中内容一次写到filepath对应的文件中
    public static void writeFile(String filepath, String content) {
        try (FileOutputStream fileOutputStream = new FileOutputStream(filepath)){
        //进行写文件操作
            fileOutputStream.write(content.getBytes());
        }catch (IOException e){
            e.printStackTrace();
        }
    }
}