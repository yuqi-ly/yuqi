package HomeWork;
//二分查找法
public class SecondBig {
    public static int a1(int key){
        //从升序排序的数组中查找KEY所在索引
        int [] arr=new int[]{0,1,2,3,4,5,6,7,8,9};
        //初始化查找的起点和终点
        int end=arr.length-1;
        int start=0;
        while (start<=end){
            //每次都从中间开始找
            int mid=(end+start)/2;
            if (arr[mid]==key){
                return mid;
            }else if (arr[mid]>key){
                //中间数大于key,就找比中间数小的
                end = mid;
            }else {
                start = mid;
            }
        }
        return -1;//表示未找到
    }

    public static void main(String[] args) {
        int i = a1(4);
        System.out.println(i);
    }

}



