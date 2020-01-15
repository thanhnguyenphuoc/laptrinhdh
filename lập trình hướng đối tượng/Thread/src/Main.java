
import java.util.logging.Level;
import java.util.logging.Logger;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author TinyThao
 */
public class Main {

    public static void main(String[] args) {
        MyThread tr = new MyThread();
        MyRunAble myRun = new MyRunAble();
        Thread th = new Thread(myRun);
        th.start(); //su dung cong cu runAble
        //Không gọi hàm run, vì nó chỉ thể hiện nội dung của tiến trình
        tr.start();// gọi tiến trình chạy //su dung cong cu Thread
        for (int i = 0; i < 1000; i++) {
            try {
                System.out.println("Tien Trinh 1: " +i);
                Thread.sleep(100);
            } catch (InterruptedException ex) {
                Logger.getLogger(Main.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
        
        
    }
}
