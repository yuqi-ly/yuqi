package HomeWork;

public class Daffodils {
    //    B:统计思想:	统计”水仙花数”共有多少个
    public static void main(String[] args) {
        int sum=0;
        for (int i = 100; i < 1000; i++) {
            int a = i / 100;
            int b = i % 100 / 10;
            int c = i % 10;
            if (a * a * a + b * b * b + c * c * c == a * 100 + b * 10 + c) {
                sum++;
            }
        }
        System.out.println(sum);
    }
}