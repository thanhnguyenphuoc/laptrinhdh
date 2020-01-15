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
public class HuanLuyenVien extends NhanVien{
    int soNKN;
    double heSL;
    double phuCap;

    public HuanLuyenVien() {
    }

    public HuanLuyenVien(int soNKN, double heSL, double phuCap, String ma, String quocTich, boolean gioiTinh, Date ngaySinh) {
        super(ma, quocTich, gioiTinh, ngaySinh);
        this.soNKN = soNKN;
        this.heSL = heSL;
        this.phuCap = phuCap;
    }

    public int getSoNKN() {
        return soNKN;
    }

    public double getHeSL() {
        return heSL;
    }

    public double getPhuCap() {
        return phuCap;
    }

    public void setSoNKN(int soNKN) {
        this.soNKN = soNKN;
    }

    public void setHeSL(double heSL) {
        this.heSL = heSL;
    }

    public void setPhuCap(double phuCap) {
        this.phuCap = phuCap;
    }

    @Override
    public double tinhLuong() {
        return heSL*LUONG_CO_BAN+phuCap;
    }
    
}
