package HomeWork;
import java.util.Arrays;

//快速排序
public class QuickSort {

    public static void main(String[] args) {
        int[] arr=new int[]{52, 49, 80, 36, 14, 58, 61, 97, 23, 75};
        quicksort qk=new quicksort();
        qk.arr=arr;
        int[] res = qk.sort(0, arr.length - 1);
        System.out.println(Arrays.toString(res));
    }

    static class quicksort{
        int[] arr;
        int[] sort(int low,int high){
            int i,j,t,tmp;
            if (low>high){
                return arr;
            }
            i=low;
            j=high;
            tmp = arr[low];//基准
            while (i!=j){
                //先从右向左找小于基准的数
                while (i<j && arr[j]>=tmp){
                    j--;
                }
                //再从左向右找大于基准的数
                while (i<j && arr[i]<=tmp){
                    i++;
                }
                //交换上边两个数的位置
                if(i<j){
                    t=arr[i];
                    arr[i]=arr[j];
                    arr[j]=t;
                }
                //循环交换位置,直到i==j退出循环,此时i的位置是基准该在的位置
            }
            //交换基准和循环得到的索引
            arr[low]=arr[i];//arr[low]就是tmp,这里不用再作临时变量了
            arr[i]=tmp;
            //递归处理基准左边数组
            sort(low,i-1);
            //递归处理基准右边数组
            sort(i+1,high);
            return arr;
        }
    }
}