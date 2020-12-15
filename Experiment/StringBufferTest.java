package Experiment;

public class StringBufferTest {
    public static void main(String[] args) {
        StringBuffer hua = new StringBuffer("我在学习Java语言，共");
        System.out.println("原字符串是："+ hua);
        System.out.println("原字符串长度是："+ hua.length());
        System.out.println("添加后的字符串是："+ hua.append("学时。"));
        System.out.println("插入后的字符串是："+ hua.insert(8,"程序设计"));
        System.out.println("插入数字后的字符串是："+ hua.insert(16,60));
        System.out.println("替换后的字符串是："+ hua.replace(0,1,"本学期"));
        System.out.println("删除后的字符串是："+ hua.deleteCharAt(16));
        System.out.println("逆序排序后的字符串是："+ hua.reverse());
        System.out.println("处理后字符串是："+ hua);
    }
}
