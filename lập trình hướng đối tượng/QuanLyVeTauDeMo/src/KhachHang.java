
import java.util.Date;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Administrator
 */
public class KhachHang {
    protected String soCMND,tenKH,gaDen;
    protected Date NgayDi;
    protected double giaVe;

    public KhachHang() {
    }

    public KhachHang(String soCMND, String tenKH, String gaDen, Date NgayDi, double giaVe) {
        this.soCMND = soCMND;
        this.tenKH = tenKH;
        this.gaDen = gaDen;
        this.NgayDi = NgayDi;
        this.giaVe = giaVe;
    }

    public String getSoCMND() {
        return soCMND;
    }

    public String getTenKH() {
        return tenKH;
    }

    public String getGaDen() {
        return gaDen;
    }

    public Date getNgayDi() {
        return NgayDi;
    }

    public double getGiaVe() {
        return giaVe;
    }

    public void setSoCMND(String soCMND) {
        this.soCMND = soCMND;
    }

    public void setTenKH(String tenKH) {
        this.tenKH = tenKH;
    }

    public void setGaDen(String gaDen) {
        this.gaDen = gaDen;
    }

    public void setNgayDi(Date NgayDi) {
        this.NgayDi = NgayDi;
    }

    public void setGiaVe(double giaVe) {
        this.giaVe = giaVe;
    }

    
    
}
