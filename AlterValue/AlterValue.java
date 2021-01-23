package HomeWork;

import java.util.Arrays;

public class AlterValue {
    public static void main (String[] args) {
        int[] arr = {1, 2, 3, 4};
        System. out. println(Arrays. toString(transform(arr)));
    }

    public static int[] transform(int[] arr) {
        for (int i = 0; i < arr.length; i++){
            arr[i] *= 2;
        }
        return arr;
    }
}
