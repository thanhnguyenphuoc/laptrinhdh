/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package core;

import java.util.ArrayList;

/**
 *
 * @author thanh
 */
public class CarList  {
   public ArrayList<Car> danhsach = new ArrayList<>();
    public boolean themVaoDanhSachCar(Car c){
        return danhsach.add(c);
    }
    public int timTrongDanhSachCar(String bienSo){
        int index=-1;
        for (Car c : danhsach) {
            index++;
            if (c.getBienSo().equalsIgnoreCase(bienSo.trim())) {
                return index;
            }
        }
        return -1;
    }
    public boolean xoaTheoBienSo(String bienSo){
        int index=timTrongDanhSachCar(bienSo);
        if (index!=-1) {
            danhsach.remove(index);
            return true;
        }
        return false;
    }
    public Car timTheoBienSo(String bienSo){
        int index=timTrongDanhSachCar(bienSo);
        if (index!=-1) {
            return danhsach.get(index);
        }
        return null;
    }
    public ArrayList<Car> layDanhSachCar(){
        return this.danhsach;
    }
    public double timGiaXeNhoNhat(){
        double min=0;
        for (Car c : danhsach) {
            double minValue=c.tinhGiaXe();
            if (min>minValue) {
                min=minValue;
                
            }
        }
        return min;
    }
    public ArrayList<Car> layDanhSachGiaXeNhoNhat(){
        ArrayList<Car> dsMoi = new ArrayList();
        for (Car c : danhsach) {
            if (c.tinhGiaXe()==timGiaXeNhoNhat()) {
                dsMoi.add(c);
            }
        }
        return dsMoi;
    }
}
