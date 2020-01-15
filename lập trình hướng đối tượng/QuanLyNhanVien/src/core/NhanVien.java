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
public abstract class NhanVien implements ITNhanVien {
    protected String maNV,tenNV;
    protected Date ngayVaoLam;
    protected double heSoLuong;

    public NhanVien(String maNV, String tenNV, Date ngayVaoLam, double heSoLuong) {
        this.maNV = maNV;
        this.tenNV = tenNV;
        this.ngayVaoLam = ngayVaoLam;
        this.heSoLuong = heSoLuong;
    }

    public String getMaNV() {
        return maNV;
    }

    public String getTenNV() {
        return tenNV;
    }

    public Date getNgayVaoLam() {
        return ngayVaoLam;
    }

    public double getHeSoLuong() {
        return heSoLuong;
    }

    public void setMaNV(String maNV) {
        this.maNV = maNV;
    }

    public void setTenNV(String tenNV) {
        this.tenNV = tenNV;
    }

    public void setNgayVaoLam(Date ngayVaoLam) {
        this.ngayVaoLam = ngayVaoLam;
    }

    public void setHeSoLuong(double heSoLuong) {
        this.heSoLuong = heSoLuong;
    }

    public NhanVien() {
    }
}
