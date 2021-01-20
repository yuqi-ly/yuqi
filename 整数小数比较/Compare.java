package HomeWork;

import java.util.Scanner;

public class Compare {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        System.out.println("两个整数中最大的是：" + max(a, b));
        double i = scan.nextDouble();
        double j = scan.nextDouble();
        System.out.println("两个小数中最大的是：" + max(i, j));
        double x = scan.nextDouble();
        double y = scan.nextDouble();
        int k = scan.nextInt();
        System.out.println("两个小数和一个整数中最大的是：" + max(i, j, k));
    }

    public static int max(int a, int b) {
        return a > b ? a : b;
    }

    public static double max(double i, double j) {
        return i > j ? i : j;
    }

    public static double max(double i, double j, int k) {
        return max(max(i, j), k);
    }
}
