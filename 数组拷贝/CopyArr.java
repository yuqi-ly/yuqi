package HomeWork;
import java.util.Arrays;
public class CopyArr {
    public static void main(String[] args) {
        int[] arr = {9,5,2,7};
        int[] newarr =copyof(arr);
        System.out.println(Arrays.toString(copyof(newarr)));
    }

    private static int[] copyof(int[] arr) {
        int[] arr1 = new int[arr.length];
        for (int i = 0; i <arr.length ; i++) {
            arr1[i]= arr[i];
        }
        return arr1;
    }
}
