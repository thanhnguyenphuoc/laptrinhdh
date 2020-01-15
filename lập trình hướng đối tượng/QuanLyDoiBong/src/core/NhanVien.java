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
public abstract class NhanVien implements IDoiBong{
    protected String ma,quocTich;
    protected boolean gioiTinh;
    protected Date ngaySinh;

    public void setMa(String ma) {
        this.ma = ma;
    }

    public void setQuocTich(String quocTich) {
        this.quocTich = quocTich;
    }

    public void setGioiTinh(boolean gioiTinh) {
        this.gioiTinh = gioiTinh;
    }

    public void setNgaySinh(Date ngaySinh) {
        this.ngaySinh = ngaySinh;
    }

    public String getMa() {
        return ma;
    }

    public String getQuocTich() {
        return quocTich;
    }

    public boolean isGioiTinh() {
        return gioiTinh;
    }

    public Date getNgaySinh() {
        return ngaySinh;
    }

    public NhanVien(String ma, String quocTich, boolean gioiTinh, Date ngaySinh) {
        this.ma = ma;
        this.quocTich = quocTich;
        this.gioiTinh = gioiTinh;
        this.ngaySinh = ngaySinh;
    }

    public NhanVien() {
    }
}
