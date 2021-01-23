package HomeWork;

import java.util.Scanner;

public class Integer {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("请输入一个整数");
        int num = scanner.nextInt();
        int count = 0;
        for(int i = 0;i < 32;i++) {
            if(((num >> i) & 1) == 1) {
                count++;
            }
        }
        System.out.println(count);
    }
}
