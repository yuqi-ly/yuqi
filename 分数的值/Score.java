package HomeWork;

public class Score {
    public static void main(String[] args) {

        int i;
        int j = 1;
        double sum = 0;
        for(i=1;i<101;i++){
            sum += 1.0/i * j;
            j = -j;
        }
        System.out.println(sum);
    }
}
