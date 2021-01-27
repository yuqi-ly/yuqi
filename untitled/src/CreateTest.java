
import java.io.File;
import java.io.IOException;

public class CreateTest{
    public static void main(String[] args) throws IOException {
        File f1 = new File("D:\\ly.text");
        File f2 = new File("D:\\mkdir");
        System.out.println(f1.exists());
        System.out.println(f2.exists());
        if(!f1.exists()){
            f1.createNewFile();
            System.out.println(f1.getName());
            System.out.println(f1.getAbsoluteFile());
        }
        if(!f2.exists()){
            f2.mkdir();
            System.out.println(f2.getName());
            System.out.println(f2.getAbsoluteFile());
        }
    }
}

