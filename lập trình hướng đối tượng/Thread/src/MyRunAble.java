
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
public class MyRunAble implements Runnable {

    @Override
    public void run() {
        for (int i = 0; i < 100; i++) {
            try {
                System.out.println("Tien trinh 3: " + i);
                Thread.sleep(150);
            } catch (InterruptedException ex) {
                Logger.getLogger(MyRunAble.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }

}
