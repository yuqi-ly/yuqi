package BookSystem.operation;

import BookSystem.BookList;

import java.util.Scanner;

public class FindOperation implements IOperation {
    @Override
    public void work(BookList bookList) {
        // 实现查找某个书籍的信息
        System.out.println("查找书籍");
        // 让用户输入书名, 来进行查找
        Scanner scanner = new Scanner(System.in);
        System.out.println("请输入要查找的书名: ");
        String name = scanner.next();
        // 循环遍历书籍列表
        for (int i = 0; i < bookList.getSize(); i++) {
            // 此处不使用 equals, 而是使用 contains.
            if (bookList.getBook(i).getName().contains(name)) {
                System.out.println(bookList.getBook(i));
            }
        }
    }
}
