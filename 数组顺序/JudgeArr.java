package HomeWork;

public class JudgeArr {
    public static void main(String[] args) {
        int[] arr = {9, 5, 2, 7};
        System.out.println(judge(arr));
    }

    private static boolean judge(int[] arr) {
        for (int i = 0; i < arr.length-1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }
        return true;
    }
}
