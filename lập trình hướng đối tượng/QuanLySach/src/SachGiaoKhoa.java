
import java.util.Date;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author TinyThao
 */
public class SachGiaoKhoa extends Sach {

    protected String tinhTrang;

    public SachGiaoKhoa() {
    }

    public SachGiaoKhoa(String tinhTrang, String maSach, Date ngayNhap, int donGia, int soLuong) {
        super(maSach, ngayNhap, donGia, soLuong);
        this.tinhTrang = tinhTrang;
    }

    public String getTinhTrang() {
        return tinhTrang;
    }

    public void setTinhTrang(String tinhTrang) {
        this.tinhTrang = tinhTrang;
    }

    @Override
    public double tinhThanhTien() {
        if (this.getTinhTrang().equalsIgnoreCase("moi".trim())) {
            return this.getDonGia() * this.getSoLuong();
        } else {
            return this.getDonGia() * this.getSoLuong() * 50 / 100;
        }
    }

}
