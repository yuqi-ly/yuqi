package HomeWork;

public class PrimeX {
    public static void main(String[] args) {
        printX(5);
    }
    public static void printX(int x){
        for (int i = 1; i <=x ; i++) {
            for (int j = 1; j <=x ; j++) {
                if(i==j || i + j == x +1){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println(" ");
        }
    }
}
