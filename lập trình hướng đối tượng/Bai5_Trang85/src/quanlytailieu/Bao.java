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
public class Bao extends TaiLieu{
    public  Date ngayPhatHanh;

    public Bao() {
    }

    public Bao(Date ngayPhatHanh, String MaTaiLieu, String tieuDe, String tenNXB, int soBanPhatHanh) {
        super(MaTaiLieu, tieuDe, tenNXB, soBanPhatHanh);
        this.ngayPhatHanh = ngayPhatHanh;
    }

    public Date getNgayPhatHanh() {
        return ngayPhatHanh;
    }

    public void setNgayPhatHanh(Date ngayPhatHanh) {
        this.ngayPhatHanh = ngayPhatHanh;
    }
    
    public int sum(){
        return this.getSoBanPhatHanh();
    }
}
