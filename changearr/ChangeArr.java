package HomeWork;

import java.util.Arrays;

public class ChangeArr {
    public static void main(String[] args) {
        int[] array1 = {1,2,3,4,5,6};
        int[] array2 = {6,5,4,3,2,1};
        System.out.println("交换前：");
        System.out.println("array1:"+ Arrays.toString(array1));
        System.out.println("array2:"+Arrays.toString(array2));
        System.out.println("交换后：");
        swapArray(array1,array2);
        System.out.println("array1:"+Arrays.toString(array1));
        System.out.println("array2:"+Arrays.toString(array2));
    }
    public static void swapArray(int[] array1,int[] array2) {
        for (int i = 0; i < array1.length; i++) {
            int temp = array1[i];
            array1[i] = array2[i];
            array2[i] = temp;
        }
    }
}