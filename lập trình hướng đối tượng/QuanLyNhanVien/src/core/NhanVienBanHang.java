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
public class NhanVienBanHang extends NhanVien{
    int soSanPhamBan;

    public NhanVienBanHang() {
    }

    public NhanVienBanHang(int soSanPhamBan, String maNV, String tenNV, Date ngayVaoLam, double heSoLuong) {
        super(maNV, tenNV, ngayVaoLam, heSoLuong);
        this.soSanPhamBan = soSanPhamBan;
    }

    public int getSoSanPhamBan() {
        return soSanPhamBan;
    }

    public void setSoSanPhamBan(int soSanPhamBan) {
        this.soSanPhamBan = soSanPhamBan;
    }

    @Override
    public double tinhLuongThucNhan() {
        double hoaHong=0,luong=0;
        if (soSanPhamBan>100) {
            hoaHong=1000000;
        }
        if (soSanPhamBan>=50||soSanPhamBan<=100) {
            hoaHong=500000;
        }
        if (soSanPhamBan<50) {
            hoaHong=0;
        }
        luong=HE_SO_LUONG_CO_BAN*heSoLuong+hoaHong;
        return luong;
    }
    
}
