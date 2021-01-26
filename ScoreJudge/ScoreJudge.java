package HomeWork;

import java.util.Scanner;

public class ScoreJudge {
    //    C:案例演示
//    //需求：键盘录入一个成绩，判断并输出成绩的等级。
//	/*
//		90-100 优秀
//		80-89  良
//		70-79  中
//		60-69  及格
//		0-59   差
//	*/
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        System.out.println("请输入成绩");
        int num=scanner.nextInt();
        String score=ChengJi(num);
        System.out.println(score);
    }

    private static String ChengJi(int num) {
        if (num>=0&&num<=59){
            return "差";
        }else if (num>=60&&num<=69){
            return "及格";
        }else if (num>=70&&num<=79){
            return "中";
        }else if (num>=80&&num<=89){
            return "良";
        }else if (num>=90&&num<=100){
            return "优秀";
        }else {
            return "输入成绩不合法";
        }
    }
}
