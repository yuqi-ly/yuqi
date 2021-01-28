class Student1 {
    private String name;
    private int age;
    public String getName(){
        return name;
    }
    public void setName(String name){
        this.name = name;
    }
    public int getAge() {
            return age;

    }
    public void setAge(int age){
        this.age =age;
    }
    public void run(String name){
        System.out.println(name+"在跑步");
    }
}
public class Student{
    public static void main(String[] args) {
        Student1 stu = new Student1();
        stu.setName("张三");
        stu.setAge(20);
        System.out.println("学生的名字叫"+ stu.getName()+"年龄是"+stu.getAge());
            stu.run("张三");
    }
}
