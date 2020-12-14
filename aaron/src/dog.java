class dog1 {
    private String name;
    private String color;
    private int age;

    public void run(String name) {
        System.out.println(name + "在跑步");
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public String getColor() {
        return color;
    }

    public int getAge() {
        return age;
    }
}
public class dog{
    public static void main(String[] args){
        dog1 dog = new dog1();
        dog.setName("小红");
        dog.setColor("黄色");
        dog.setAge(2);
        System.out.println("一条叫"+dog.getName()+"的"+dog.getColor()+"的狗的年龄是"+dog.getAge());
        dog.run("一条叫小红的狗");

    }
}
