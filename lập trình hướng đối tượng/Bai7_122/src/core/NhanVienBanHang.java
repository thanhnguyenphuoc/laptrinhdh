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
public class NhanVienBanHang extends NhanVien{
    int soSPBan;

    public NhanVienBanHang() {
    }

    public NhanVienBanHang(int soSPBan, String maNV, String tenNV, Date ngayVL, double heSL) {
        super(maNV, tenNV, ngayVL, heSL);
        this.soSPBan = soSPBan;
    }

    public int getSoSPBan() {
        return soSPBan;
    }

    public void setSoSPBan(int soSPBan) {
        this.soSPBan = soSPBan;
    }

    @Override
    public double tinhLuongThucNhan() {
        double luong=0,hoaHong=0;
        if (soSPBan>100) {
            hoaHong=1000000;
        }
        if(soSPBan>=50||soSPBan<=100){
            hoaHong=500000;
        }
        if (soSPBan<50) {
            hoaHong=0;
        }
        luong=hoaHong+heSL*HE_SO_LUONG_CO_BAN;
        return luong;
    }
    
}
