/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package core;

import java.util.Date;

/**
 *
 * @author Administrator
 */
public abstract class NhanVien implements ITNhanVien{
    protected String maNV,tenNV;
    protected Date ngayVL;
    protected double heSL;

    public NhanVien() {
    }

    public NhanVien(String maNV, String tenNV, Date ngayVL, double heSL) {
        this.maNV = maNV;
        this.tenNV = tenNV;
        this.ngayVL = ngayVL;
        this.heSL = heSL;
    }

    public String getMaNV() {
        return maNV;
    }

    public String getTenNV() {
        return tenNV;
    }

    public Date getNgayVL() {
        return ngayVL;
    }

    public double getHeSL() {
        return heSL;
    }

    public void setMaNV(String maNV) {
        this.maNV = maNV;
    }

    public void setTenNV(String tenNV) {
        this.tenNV = tenNV;
    }

    public void setNgayVL(Date ngayVL) {
        this.ngayVL = ngayVL;
    }

    public void setHeSL(double heSL) {
        this.heSL = heSL;
    }
}
