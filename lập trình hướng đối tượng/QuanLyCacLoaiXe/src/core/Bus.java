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
public class Bus  extends Car{
    String tuyenDuong;

    public Bus(String tuyenDuong, String bienSo, String nhaSX, int soChoNgoi, Date namSX, double giaGoc) {
        super(bienSo, nhaSX, soChoNgoi, namSX, giaGoc);
        this.tuyenDuong = tuyenDuong;
    }

    public Bus() {
    }

    public String getTuyenDuong() {
        return tuyenDuong;
    }

    public void setTuyenDuong(String tuyenDuong) {
        this.tuyenDuong = tuyenDuong;
    }

    @Override
    public double tinhGiaXe() {
        if (soChoNgoi<7) {
            return giaGoc+giaGoc*60/100;
        }
        else{
            return giaGoc+giaGoc*70/100;
        }
    }
    
}
