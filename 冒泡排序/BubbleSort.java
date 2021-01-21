package HomeWork;
import java.util.Arrays;
public class BubbleSort {
    public static void main(String[] args) {
        int[] arr = {9,5,2,7};
        System.out.println("冒泡排序后数组顺序为："+Arrays.toString(bubbleSort(arr)));
    }

    private static int[] bubbleSort(int[] arr) {
        if (arr.length==0){
            return arr;
        }
        else{
            for (int i = 0; i <arr.length ; i++) {
                for (int j = 0; j <arr.length-1-i ; j++) {
                    if (arr[j+1]<arr[j]){
                        int temp = arr[j+1];
                        arr[j+1] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
            return arr;
        }
    }
}
