package HomeWork;

import java.util.Random;
import java.util.Scanner;

public class GuesstheNumber {
    public static void main(String[] args) {
        GuessNumber();
    }

    private static void GuessNumber() {
        while (true) {
            int choice = menu();
            if (choice == 1) {
                game();
            } else if (choice == 0) {
                System.out.println("GoodBye!");
            } else {
                System.out.println("您的输入有误，请重新输入！");
            }
        }

    }

    private static void game() {
        Random random = new Random();
        int toGuess = random.nextInt(100);
        Scanner scanner = new Scanner(System.in);
        while(true){
            System.out.println("请输入要猜的数字：");
            int num = scanner.nextInt();
            if (num<toGuess){
                System.out.println("低了！");
            }
            else if (num>toGuess){
                System.out.println("高了！");
            }
            else{
                System.out.println("猜对了！");
                break;
            }
        }
    }

    private static int menu() {
        System.out.println("============");
        System.out.println("1.开始游戏");
        System.out.println("0.结束游戏");
        System.out.println("============");
        System.out.println("请输入您的选择：");
        Scanner scanner = new Scanner(System.in);
        int choice = scanner.nextInt();
        return choice ;
    }

}