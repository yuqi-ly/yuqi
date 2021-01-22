package HomeWork;

import java.util.Arrays;

public class Conversion {
    public static void main(String[] args) {
        int[] arr = {9,5,2,7};
        String newarr = toString(arr);
        System.out.println(newarr);
    }

    private static String toString(int[] arr) {
        String newarr = Arrays.toString(arr);
        return newarr;
    }

}
