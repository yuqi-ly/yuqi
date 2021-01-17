package HomeWork;

import java.util.Scanner;

public class Age {
    public static void main(String[] args) {

        result();
    }

    public static void result() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("请输入您的年龄：");
        int n = scanner.nextInt();
        if (n < 18&&n>0) {
            System.out.println("是少年");
        }
        else if (n>=18&&n<=28){
            System.out.println("是青年");
        }
        else if (n>=29&&n<=55){
            System.out.println("是中年");
        }
        else if (n>=56){
            System.out.println("是老年");
        }
        else{
            System.out.println("请重新正确输入您的年龄！");
        }
    }
}

