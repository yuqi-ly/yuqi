package HomeWork;

public class PrimeNumber {
    public static void main(String[] args) {
        int i,j = 0;
        for (i = 2; i <= 100; i++) {
            for(j = 2;j<i;j++){
                if(i % j == 0){
                    break;
                }
            }
            if(i==j){
                System.out.print(i+" ");
            }
        }
    }
}

