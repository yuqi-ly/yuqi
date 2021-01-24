package HomeWork;

public class SortArray {
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5,6,7,8,9};
        int length = arr.length;
        for (int i = 0; i < length; i++) {
            for (int j = length - 1; j > 0; j--) {
                if (arr[j] % 2 == 1 && arr[j - 1] % 2 == 0) {
                    int temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                }
            }
            System.out.print(arr[i]+",");
        }
    }
}