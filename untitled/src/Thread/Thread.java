package Thread;

class TestThread {
    public static void main(String[] args) {
        myThread ou = new myThread();
        ou.start();
        for (int i = 0; i < 100 ; i++) {
            System.out.println("主线程---->"+i);
        }
    }

}
class myThread extends Thread{
    public void run(){
        for (int i = 0; i < 100; i++) {
            System.out.printf("支杆线程---->"+i);
        }
    }
}