package HomeWork;

public class ReverseArr {

        public static void main(String[] args) {
            int[] arr={10,20,30,40,50};
            for (int i = 0; i < arr.length/2; i++) {
                int sum=arr[i];
                arr[i]=arr[arr.length-i-1];
                arr[arr.length-i-1]=sum;
            }
            for (int i = 0; i < arr.length; i++) {
                System.out.print(arr[i]+" ");
            }
        }
    }

