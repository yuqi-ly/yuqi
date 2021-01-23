package HomeWork;

public class ArraySum {
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5,6,7,8,9};
        System.out.println("数组元素之和为："+sum(arr));
    }

    private static int sum(int[] arr) {
        int ret = 0;
        for (int i = 0; i <arr.length ; i++) {
            ret+=arr[i];
        }
        return ret;
    }
}
