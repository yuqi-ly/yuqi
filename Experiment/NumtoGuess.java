package Experiment;

import java.util.Random;
import java.util.Scanner;

public class NumtoGuess {//猜数字游戏
    public static void main(String[] args) {
        //1.先生成一个[1,100]的随机整数
        Random random = new Random();
        int toGuess = random.nextInt(100)+1;
        //2.循环的提示用户来输入数字
        Scanner scanner = new Scanner(System.in);
        while(true){
            System.out.println("请输入要猜的数字：");
            int num = scanner.nextInt();
            //3.根据用户的输入进行判定
            if(num < toGuess){
                System.out.println("低了");
            }
            else if(num > toGuess){
                System.out.println("高了");
            }
            else{
                System.out.println("猜对了");
                break;
            }

        }
    }
}
