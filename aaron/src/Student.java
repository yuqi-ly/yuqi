class Student1 {
    String name;
    int age;
    public void run(String name){

        System.out.println(name+"在打太极");
    }
}
public class Student{
    public static void main(String[] args) {
        Student1 stu = new Student1();
        stu.name = "张三";
        stu.age =18;
        System.out.println(stu.name+"的年龄是"+stu.age);
        stu.run("张三");
    }
}

