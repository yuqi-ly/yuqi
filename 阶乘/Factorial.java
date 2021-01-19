package HomeWork;

import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int add=facadd(n);
        System.out.println(add);
    }
    public static int facadd(int n) {
        int sum=0;
        for(int i=1;i<=n;i++) {
            int ret=1;
            for(int j=1;j<=i;j++) {
                ret*=j;
            }
            sum+=ret;
        }
        return sum;
    }
}
