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
public abstract class Car implements ICar{
    protected String bienSo,nhaSX;
    protected int soChoNgoi;
    protected Date namSX;
    protected double giaGoc;

    public Car() {
    }

    public Car(String bienSo, String nhaSX, int soChoNgoi, Date namSX, double giaGoc) {
        this.bienSo = bienSo;
        this.nhaSX = nhaSX;
        this.soChoNgoi = soChoNgoi;
        this.namSX = namSX;
        this.giaGoc = giaGoc;
    }

    public void setBienSo(String bienSo) {
        this.bienSo = bienSo;
    }

    public void setNhaSX(String nhaSX) {
        this.nhaSX = nhaSX;
    }

    public void setSoChoNgoi(int soChoNgoi) {
        this.soChoNgoi = soChoNgoi;
    }

    public void setNamSX(Date namSX) {
        this.namSX = namSX;
    }

    public void setGiaGoc(double giaGoc) {
        this.giaGoc = giaGoc;
    }

    public String getBienSo() {
        return bienSo;
    }

    public String getNhaSX() {
        return nhaSX;
    }

    public int getSoChoNgoi() {
        return soChoNgoi;
    }

    public Date getNamSX() {
        return namSX;
    }

    public double getGiaGoc() {
        return giaGoc;
    }
    
}
