/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Sync;

/**
 *
 * @author TinyThao
 */
public class Main {

    static TaiKhoan tk = new TaiKhoan();// TAI NGUYEN CHUNG

    public static void main(String[] args) {
        tk.setSoDu(100);
        tk.guiTien(20);
        System.out.println("So tien cua ban la: " + tk.getSoDu());
        int conLai = tk.rutTien(110);
        System.out.println("So tien con lai: " + conLai);

        Thread threadCha = new Thread();
        Thread threadCon = new Thread();
        threadCha.start();
        threadCon.start();
    }
}
