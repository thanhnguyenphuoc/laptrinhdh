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
public class LuxuryCar extends Car{
    double cuocVanChuyen;
    double lePhiTTDB;
    double thue;

    public LuxuryCar() {
    }

    public LuxuryCar(double cuocVanChuyen, double lePhiTTDB, double thue, String bienSo, String nhaSX, int soChoNgoi, Date namSX, double giaGoc) {
        super(bienSo, nhaSX, soChoNgoi, namSX, giaGoc);
        this.cuocVanChuyen = cuocVanChuyen;
        this.lePhiTTDB = lePhiTTDB;
        this.thue = thue;
    }

    public double getCuocVanChuyen() {
        return cuocVanChuyen;
    }

    public double getLePhiTTDB() {
        return lePhiTTDB;
    }

    public double getThue() {
        return thue;
    }

    public void setCuocVanChuyen(double cuocVanChuyen) {
        this.cuocVanChuyen = cuocVanChuyen;
    }

    public void setLePhiTTDB(double lePhiTTDB) {
        this.lePhiTTDB = lePhiTTDB;
    }

    public void setThue(double thue) {
        this.thue = thue;
    }
    

    @Override
    public double tinhGiaXe() {
        return giaGoc+thue*giaGoc*lePhiTTDB+cuocVanChuyen;
    }
    
}
