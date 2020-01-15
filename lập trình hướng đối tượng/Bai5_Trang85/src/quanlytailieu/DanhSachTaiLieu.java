/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package quanlytailieu;

import java.util.ArrayList;

/**
 *
 * @author Administrator
 */
public class DanhSachTaiLieu {
    ArrayList<TaiLieu> danhsachs = new ArrayList<>();
    
    public boolean themVaoDanhsach(TaiLieu tl){  // cau a
        return danhsachs.add(tl);
    }
    
    public ArrayList<TaiLieu> layToanBoDanhSach(){ // cau a
        return this.danhsachs;
    }
    
    public int timViTriTaiLieuTrongDanhSach(TaiLieu NhaXuatBan){
        return 0;
    }
    
    public ArrayList<TaiLieu> timTaiLieuTheoNhaXuatBan(String tenNhaXuatBan){
        ArrayList<TaiLieu> dsMoi = new ArrayList<>();
        for (TaiLieu tl : danhsachs) {
            if (tl.getTenNXB().equalsIgnoreCase(tenNhaXuatBan.trim())) {
                dsMoi.add(tl);
            }
        }
        return dsMoi;
    }
    
    public ArrayList<TaiLieu> timTaiLieuTheoTieuDe(String tieuDe){
        ArrayList<TaiLieu> dsMoi = new ArrayList<>();
        for (TaiLieu tl : danhsachs) {
            if(tl.getTieuDe().equalsIgnoreCase(tieuDe))
                dsMoi.add(tl);
        }
        return dsMoi;
    }
    
    
    public int timSoBanPhatHanhNhieuNhat(){
        int max = -1;
        for (TaiLieu tl : danhsachs) {
            if(max < tl.getSoBanPhatHanh())
                max = tl.getSoBanPhatHanh();
        }
        return max;
    }
    
    
    public ArrayList<TaiLieu> layDanhSachCoSoPhatHanhLonNhat(){
        ArrayList<TaiLieu> dsMoi = new ArrayList<>();
        for (TaiLieu tl : danhsachs) {
            if(tl.getSoBanPhatHanh() == timSoBanPhatHanhNhieuNhat())
                dsMoi.add(tl);
        }
        return dsMoi;
    }
    
    public int timViTriTaiLieuTrongDanhSach(String maTaiLieu){
        int index =-1;
        for (TaiLieu tl : danhsachs) {
            index ++;
            if (tl.getMaTaiLieu().equalsIgnoreCase(maTaiLieu.trim())) {
                return index;
            }
        }
        return -1;
    }
    
    public boolean xoaTaiLieuTheoMaChiDinh(String Ma){
        int index = timViTriTaiLieuTrongDanhSach(Ma);
        if (index != -1) {
            danhsachs.remove(index);
            return true;
        }
        return false;
    }
    
    
}//Ket thuc Class
