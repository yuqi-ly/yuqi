package HomeWork;

public class BinarySearch {
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5,6,7,8,9};
        int ret = search(arr,2);
        System.out.println(ret);
    }

    private static int search(int[] arr, int tofind) {
        int left = 0;
        int right = arr.length-1;
        while (left < right){
            int mid = (left+right)/2;
            if (tofind < mid){
                right = mid-1;
            }
            else if (tofind > mid){
                left = mid+1;
            }
            else{
                return mid;
            }
        }
        return -1;
    }
}
