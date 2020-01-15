/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Sync;

import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author TinyThao
 */
public class TaiKhoan {

    private int soDu;

    public TaiKhoan() {
    }

    public TaiKhoan(int soDu) {
        this.soDu = soDu;
    }

    public int getSoDu() {
        return soDu;
    }

    public void setSoDu(int soDu) {
        this.soDu = soDu;
    }

    public synchronized void guiTien(int soTien) {        //đồng bộ
        soDu += soTien;
        System.out.println("da nop tien vao tai khoan");
        notifyAll();
    }

    public synchronized int rutTien(int soTien) {        //đồng bộ
        if (soDu > soTien) {
            soDu -= soTien;
        } else {
            try {
                //đợi tiến trình cho đến khi có thông báo
                System.out.println("Khong du tien");
                wait();
            } catch (InterruptedException ex) {
                Logger.getLogger(TaiKhoan.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
        return soDu;
    }
}
