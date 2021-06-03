package test;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;

class Student{
    public int id = 10;
    public String name = "xiaoming";
}
public class testGson {
    public static void main(String[] args) {
    Student student = new Student();
    //要进行转换，需要先准备好一个GSON实例
        //这种风格代码称之为"工厂设计模式"
        //不是直接new某个类的实例本身，而是借助其它类来创建该实例
        //此处借助GsonBuilder类来创建Gson实例
        //如果直接new Gson，需要传入很多参数，使用不便
        //GsonBuileder就相当于把一些常用的选项都提前设置好
        //GsonBuilder这个类就称之为"工厂类"
        Gson gson = new GsonBuilder().create();
        //把对象转成JSON字符串
        String studentString = gson.toJson(student);
        System.out.println(studentString);
        //把JSON字符串转换成对象
        Student student1 = gson.fromJson(studentString,Student.class);
        System.out.println(student1.id);
        System.out.println(student1.name);

    }
}
