package HomeWork;

import java.util.Scanner;

public class ThemultiplicationTable {
    private static void multiplicationTable(int n) {
        int i=1;
        int j=1;
        for(i=1;i<=n;i++) {
            for(j=1;j<=i;j++) {
                System.out.print(j+"*"+i+"="+j*i+'\t' );
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        multiplicationTable(n);
    }
}
