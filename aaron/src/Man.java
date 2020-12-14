 class Man1 {
    String name;
    int age;
    public void run(String name){
        System.out.println(name+"在跑步");
    }
}
public class Man{
    public static void main(String[] args) {
        Man1 stu = new Man1();
        stu.name ="花花";
        stu.age = 18;
        System.out.println(stu.name+"的年龄是"+stu.age);
        stu.run("花花");
    }
}
