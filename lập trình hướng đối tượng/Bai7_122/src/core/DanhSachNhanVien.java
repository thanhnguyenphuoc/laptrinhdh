/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package core;

import java.util.ArrayList;

/**
 *
 * @author Administrator
 */
public class DanhSachNhanVien {
    ArrayList<NhanVien> danhsach= new ArrayList<>();
    public boolean themDanhSachNhanVien(NhanVien nv){
        return danhsach.add(nv);
    }
    public ArrayList<NhanVien> layDanhSachNhanVien(){
        return this.danhsach;
    }
    public  int timNhanVienTheoDanhSach(String maNV){
        int index= -1;
        for (NhanVien nv : danhsach) {
            index++;
            if (nv.getMaNV().equalsIgnoreCase(maNV.trim())) {
                return index;
            }
        }
        return -1;
    }
    public boolean xoaNhanVienTheoMa(String maNV){
        int index=timNhanVienTheoDanhSach(maNV);
        if (index!=-1) {
            danhsach.remove(index);
            return true;
        }
        return false;
    }
    public NhanVien timNhanVienTheoMa(String maNV){
         int index=timNhanVienTheoDanhSach(maNV);
         if (index!=-1) {
            return danhsach.get(index);
        }
        return null;
    }
    public int NhanVienBanHangCaoNhat(){
       int max=0;
       int maxValue;
        for (NhanVien nv : danhsach) {
            if (nv instanceof NhanVienBanHang) {
                 NhanVienBanHang nvbh =(NhanVienBanHang) nv;
                 maxValue = nvbh.getSoSPBan();
                 if (max<maxValue) {
                    max = maxValue;
                }
            }
        }
        return max;
    }
    public ArrayList<NhanVien> timNhanVienBanHangCaoNhat(){
           ArrayList<NhanVien> dsMoi = new ArrayList<>();
           for (NhanVien nv : danhsach) {
               if (nv instanceof NhanVienBanHang) {
                   NhanVienBanHang nvbh = (NhanVienBanHang)nv;
                   if (nvbh.getSoSPBan()==NhanVienBanHangCaoNhat()) {
                        dsMoi.add(nv);
                   }
               }
        }
        return dsMoi;
    
    }
            
}
