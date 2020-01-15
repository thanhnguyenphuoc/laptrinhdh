/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package quanlytailieu;

/**
 *
 * @author Administrator
 */
public class Sach extends TaiLieu{
    public String tenTacGia, soTrang;

    public Sach() {
    }

    public Sach(String tenTacGia, String soTrang, String MaTaiLieu, String tieuDe, String tenNXB, int soBanPhatHanh) {
        super(MaTaiLieu, tieuDe, tenNXB, soBanPhatHanh);
        this.tenTacGia = tenTacGia;
        this.soTrang = soTrang;
    }

    public String getTenTacGia() {
        return tenTacGia;
    }

    public void setTenTacGia(String tenTacGia) {
        this.tenTacGia = tenTacGia;
    }

    public String getSoTrang() {
        return soTrang;
    }

    public void setSoTrang(String soTrang) {
        this.soTrang = soTrang;
    }
    
}
