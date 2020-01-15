/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package quanlytailieu;

import java.util.Date;

/**
 *
 * @author Administrator
 */
public class TapChi extends TaiLieu{
    public String soPhatHanh, ngayPhatHanh;

    public TapChi() {
    }

    public TapChi(String soPhatHanh, String ngayPhatHanh, String MaTaiLieu, String tieuDe, String tenNXB, int soBanPhatHanh) {
        super(MaTaiLieu, tieuDe, tenNXB, soBanPhatHanh);
        this.soPhatHanh = soPhatHanh;
        this.ngayPhatHanh = ngayPhatHanh;
    }

    public String getSoPhatHanh() {
        return soPhatHanh;
    }

    public void setSoPhatHanh(String soPhatHanh) {
        this.soPhatHanh = soPhatHanh;
    }

    public String getNgayPhatHanh() {
        return ngayPhatHanh;
    }

    public void setNgayPhatHanh(String ngayPhatHanh) {
        this.ngayPhatHanh = ngayPhatHanh;
    }

    

    
}
