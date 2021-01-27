import java.util.Random;

public class SortNum {
    public static void main(String[] args) {
        int[]arr = new int[10];
        Random rm= new Random();
        System.out.print("[");
        for(int i = 0;i<10;i++){
            arr[i] =rm.nextInt(100);
            System.out.print(arr[i]+",");
        }
        System.out.print("]\n");
        int temp = 0;
        int len = arr.length;
        for(int j = len-1;j > 0;j--){
            for(int i = 0;i <len - 1; i++){
                if(arr[i] >arr[i+1]){
                    temp =arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
        }
        System.out.print("[");
        for(int i: arr){
            System.out.print(i+",");
        }
        System.out.print("]");
    }
}
