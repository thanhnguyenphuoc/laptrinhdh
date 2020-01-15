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
public class NhanVienQuanLy extends NhanVien{
    String chucVu;
    double phuCapChucVu;

    public NhanVienQuanLy(String chucVu, double phuCapChucVu, String maNV, String tenNV, Date ngayVaoLam, double heSoLuong) {
        super(maNV, tenNV, ngayVaoLam, heSoLuong);
        this.chucVu = chucVu;
        this.phuCapChucVu = phuCapChucVu;
    }

    public NhanVienQuanLy() {
    }

    public String getChucVu() {
        return chucVu;
    }

    public double getPhuCapChucVu() {
        return phuCapChucVu;
    }

    public void setChucVu(String chucVu) {
        this.chucVu = chucVu;
    }

    public void setPhuCapChucVu(double phuCapChucVu) {
        this.phuCapChucVu = phuCapChucVu;
    }

    @Override
    public double tinhLuongThucNhan() {
        return heSoLuong*HE_SO_LUONG_CO_BAN+phuCapChucVu;
    }
    
}
