
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
public class SachThamKhoa extends Sach {

    protected double thue;

    public SachThamKhoa() {
    }

    public SachThamKhoa(double thue, String maSach, Date ngayNhap, int donGia, int soLuong) {
        super(maSach, ngayNhap, donGia, soLuong);
        this.thue = thue;
    }

    public double getThue() {
        return thue;
    }

    public void setThue(double thue) {
        this.thue = thue;
    }

    @Override
    public double tinhThanhTien() {
        return this.getDonGia() * this.getSoLuong() + this.getThue();
    }

}
