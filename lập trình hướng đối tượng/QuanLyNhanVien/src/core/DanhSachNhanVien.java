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
public class DanhSachNhanVien {
    ArrayList<NhanVien> danhsach = new ArrayList<>();
    public boolean themDanhSachNhanVien(NhanVien nv){
        return danhsach.add(nv);
    }
    public ArrayList<NhanVien> layDanhSachNhanVien(){
        return this.danhsach;
    }
    public int timNhanVienTrongDanhSach(String maNV){
        int index=-1;
        for (NhanVien nv : danhsach) {
            index++;
            if (nv.getMaNV().equalsIgnoreCase(maNV.trim())) {
                return index;
            }
        }
        return -1;
    }
    public boolean xoaNhanVienTheoMa(String maNV){
        int index = timNhanVienTrongDanhSach(maNV);
        if (index!=-1) {
            danhsach.remove(index);
            return true;
        }
        return false;
    }
    public NhanVien timNhanVienTheoMa(String maNV){
        int index = timNhanVienTrongDanhSach(maNV);
        if (index!=-1) {
              return danhsach.get(index);
        }
        return null;
    }
    public double NhanVienBanSoSanPhamNhieuNhat(){
        double max=0;
        for (NhanVien nv : danhsach) {
            if (nv instanceof NhanVienBanHang) {
                NhanVienBanHang nvbh=(NhanVienBanHang) nv;
                double maxValue = nvbh.getSoSanPhamBan();
                if (max<maxValue) {
                    max=maxValue;
                }
            }
        }
        return max;
    }
    public NhanVien timNhanVienBanSoSanPhamNhieuNhat(String maNV){
        int index=timNhanVienTrongDanhSach(maNV);
        if (index!=-1) {
            return danhsach.get(index);
        }
        return null;
    }
}
