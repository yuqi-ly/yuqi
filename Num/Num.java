package HomeWork;

import java.util.Scanner;

public class Num {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        print(n);
    }
    public static void  print (int n) {
        if(n < 0) {
            System.out.println("-");
            n = -n;
        }
        if(n>9) {
            print(n/10);
        }
        System.out.println(n%10);
    }
}
