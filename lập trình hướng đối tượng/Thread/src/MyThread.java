
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
public class MyThread extends Thread {

    //Bắt buộc vài đè run()
    @Override
    public void run() {
        for (int i = 0; i < 1000; i++) {
            System.out.println("Tien trinh 2: " +i);
            try {
                Thread.sleep(100);
            } catch (InterruptedException ex) {
                Logger.getLogger(MyThread.class.getName()).log(Level.SEVERE, null, ex);
            }
        }

    }

}
