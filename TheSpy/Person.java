package TheSpy;

public abstract class Person {
    private String name;
    private Integer age;
    private String gender;

    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name=name;
    }
    public Integer getAge() {
        return age;
    }
    public void setAge(Integer age) {
        this.age=age;
    }
    public String getGender() {
        return gender;
    }
    public void setGender(String genter) {
        this.gender=gender;
    }
    void learn() {
        System.out.println("learning...");
    }
}