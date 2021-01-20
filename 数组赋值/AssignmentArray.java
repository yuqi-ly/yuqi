package HomeWork;

import java.util.Arrays;

public class AssignmentArray {
    public static void main(String[] args) {
        int[] arr = new int[100];
        assignmentArray(arr);
    }

    private static void assignmentArray(int[] arr) {
        for (int i = 0; i< arr.length ; i++) {
            arr[i]=i+1;
        }
        System.out.println("数组赋值后为："+ Arrays.toString(arr));
    }
}
