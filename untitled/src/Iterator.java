import java.io.File;

public class Iterator {
    public static void main(String[] args) {
        File file = new File("F:\\python");
        if(file.exists()){
            String[] str = file.list();
            for(String temp: str){
                System.out.println(temp);
            }
        }
        File[] file1 = file.listFiles();
            for(File i: file1){
                if(i.isFile()){
                    System.out.println("该文件时:"+i.getName());
                }
                else{
                    System.out.println("该目录是："+i.getName());
                }
            }
    }
}
