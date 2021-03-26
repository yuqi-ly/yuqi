package Java_0326;

import java.util.Arrays;
class MyArrayListIndexOutOfRangeException extends RuntimeException {
    public MyArrayListIndexOutOfRangeException(String message) {
        super(message);
    }
}

public class MyArrayList {
    private String data[] = null;
    //当前顺序表中的有效元素个数
    private int size = 0;
    //当前顺序表中最大容纳元素，如果size超过了capacity，就需要扩容
    private int capacity = 100;

    public MyArrayList() {
        data = new String[capacity];
    }
    //方法

    //实现扩容

    private void realloc() {
        //先把capacity变大
        capacity = capacity * 2;
        String[] newdata = new String[capacity];
        //把旧数组中的数据拷贝到新数组中
        for (int i = 0; i < data.length; i++) {
            newdata[i] = data[i];
        }
        data = newdata;
    }

    //1.把元素尾插到顺序表末尾
    public void add(String elem) {
        if (size >= capacity) {
            realloc();
        }
        //就直接把新的元素放到下标为size的位置上即可
        data[size] = elem;
        size++;
    }

    //2.把元素插入到任意中间位置
    public void add(int index, String elem) {
        if (index < 0 || index > size) {
            return;
        }
        if (size >= capacity) {
            realloc();
        }
        //把elem放到index位置上，不能覆盖掉已有的元素
        //需要把index位置的元素，依次往后搬运，给index位置元素腾出一个空闲空间，来放置elem
        for (int i = size - 1; i >= index; i--) {
            data[i + 1] = data[i];
        }
        //搬运完毕，把新的元素放到index位置上
        data[index] = elem;
        size++;
    }

    //3.按照下标位置删除元素

    public String remove(int index){
        //仍然需要进行位置的搬运
        if (index < 0 || index >= size){
            return null;
        }
        String result = data[index];
        for (int i = index; i <size-1 ; i++) {
            data[i] = data[i+1];
        }
        size--;
        return result;
    }

    //4.按照元素的值来删除元素

    public boolean remove(String elem){
        int index = 0;
        for (; index <size; index++) {
            if (data[index].equals(elem)){
                break;
            }
        }
        if (index>=size){
            //没有找到匹配元素，删除失败
            return false;
        }
        //找到匹配的元素了，从index位置开始搬运
        for (int i = index; i <size-1 ; i++) {
            data[i] = data[i+1];
        }
        size--;
        return true;
    }

    //5.根据下标获取元素
    public  String get(int index){
        if (index<0 || index>=size){
            throw new MyArrayListIndexOutOfRangeException("下标越界了! index: " + index);
        }
        return data[index];
    }

    //6.根据下标修改元素
    public void set(int index,String elem){
        if (index<0 || index>=size){
            throw new MyArrayListIndexOutOfRangeException("下标越界了! index: " + index);
        }
        data[index] = elem;
    }

    //7.判断元素是否存在
    public boolean contains(String elem){
        for (int i = 0; i <size; i++) {
            if (data[i].equals(elem)){
                return true;
            }
        }
        return  false;
    }

    //8.查找元素位置
    public int indexof(String elem){
        for (int i = 0; i <size ; i++) {
            if (data[i].equals(elem)){
                return i;
            }
        }
        return -1;
    }

    //9.查找元素位置(从后往前找)
    public int lastIndexof(String elem){
        for (int i = size-1; i>=0 ; i--) {
            if (data[i].equals(elem)){
                return i;
            }
        }
        return -1;
    }


    @Override
    public String toString() {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.append("[");
        for (int i = 0; i < size; i++) {
            stringBuilder.append(data[i]);
            if (i < size - 1) {
                stringBuilder.append(",");
            }
        }
        stringBuilder.append("]");
        return stringBuilder.toString();
    }

    //验证方法
    private static void testAdd(){
        MyArrayList myArrayList = new MyArrayList();
        //1.验证尾插
        myArrayList.add("c");
        myArrayList.add("c++");
        myArrayList.add("java");
        myArrayList.add("python");
        System.out.println(myArrayList);
        //2.验证中间插入
        myArrayList.add(1, "javascript");
        System.out.println(myArrayList);
    }

    private static void testRemove(){
        MyArrayList myArrayList = new MyArrayList();
        myArrayList.add("c");
        myArrayList.add("c++");
        myArrayList.add("java");
        myArrayList.add("python");

        myArrayList.remove(1);
        System.out.println(myArrayList);

        myArrayList.remove("java");
        System.out.println(myArrayList);
    }
    private static void testgetAndset(){
        MyArrayList myArrayList = new MyArrayList();
        myArrayList.add("c");
        myArrayList.add("c++");
        myArrayList.add("java");
        myArrayList.add("python");
        System.out.println(myArrayList.get(1));
        myArrayList.set(1,"javascript");
        System.out.println(myArrayList);
    }
    private static void testContainsAndIndexof(){
        MyArrayList myArrayList = new MyArrayList();
        myArrayList.add("c");
        myArrayList.add("c++");
        myArrayList.add("java");
        myArrayList.add("python");
        System.out.println(myArrayList.contains("c++"));
        System.out.println(myArrayList.indexof("c++"));
        System.out.println(myArrayList.lastIndexof("c++"));
    }
    public static void main(String[] args) {
        //testRemove();
        //testgetAndset();
        testContainsAndIndexof();
    }
}

