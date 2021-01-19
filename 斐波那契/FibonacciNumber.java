package HomeWork;

import java.util.Scanner;

public class FibonacciNumber {
    public static int fib (int n) {
        if (n <= 2) {
            return 1;
        }
        else {
            return (fib(n - 1) + fib (n - 2));
        }
    }
    public static void main (String args[]) {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = fib(a);
        System.out.println(b);
    }
    }

