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
public class DanhSachDoiBong {
    ArrayList<NhanVien> danhsach = new ArrayList<>();
    public boolean themVaoDanhSach(NhanVien nv){
        return danhsach.add(nv);
    }
    public ArrayList<NhanVien> layDanhSachDoiBong(){
        return this.danhsach;
    
    }
    public int timViTriTrongDanhSach(String ma){
        int index=-1;
        for (NhanVien nv : danhsach) {
            index++;
            if (nv.getMa().equalsIgnoreCase(ma.trim())) {
                return index;
            }
        }
        return -1;
    }
    public boolean xoaTheoMa(String ma){
        int index=timViTriTrongDanhSach(ma);
        if (index!=-1) {
            danhsach.remove(index);
            return true;
        }
        return false;
    }
    public NhanVien timNhanVienTheoMa(String ma){
        int index=timViTriTrongDanhSach(ma);
        if (index!=-1) {
            return danhsach.get(index);
        }
        return null;
    }
    public double inDanhSachLuongHLV(){
        double luong=0;
        for (NhanVien nv : danhsach) {
            if (nv instanceof HuanLuyenVien) {
                HuanLuyenVien hlv = (HuanLuyenVien) nv;
                luong=hlv.tinhLuong();
            }
        }
        return luong;
    }
    public ArrayList<NhanVien> layDanhSachTheoHLV(){
        ArrayList<NhanVien> dsMoi = new ArrayList<>();
        for (NhanVien nv : danhsach) {
            if (nv instanceof HuanLuyenVien) {
                HuanLuyenVien hlv = (HuanLuyenVien) nv;
                if (inDanhSachLuongHLV()==hlv.tinhLuong()) {
                    dsMoi.add(nv);
                }
            }
        }
        return dsMoi;
    }
}
