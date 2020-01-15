/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package core;

import java.util.Date;

/**
 *
 * @author thanh
 */
public class CauThu extends NhanVien{
   int soBT;
   double luongTT;

    public void setSoBT(int soBT) {
        this.soBT = soBT;
    }

    public void setLuongTT(double luongTT) {
        this.luongTT = luongTT;
    }

    public int getSoBT() {
        return soBT;
    }

    public double getLuongTT() {
        return luongTT;
    }

    public CauThu(int soBT, double luongTT, String ma, String quocTich, boolean gioiTinh, Date ngaySinh) {
        super(ma, quocTich, gioiTinh, ngaySinh);
        this.soBT = soBT;
        this.luongTT = luongTT;
    }

    public CauThu() {
    }
    @Override
    public double tinhLuong() {
        return luongTT+soBT*PHU_CAP_MOT_NAM;
    }
    
}
