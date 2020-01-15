
import java.util.ArrayList;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Administrator
 */
public class DanhSachKhachHang {
    ArrayList<KhachHang> danhsachs = new ArrayList<>();
    public boolean ThemVaoDanhSach(KhachHang kh){
        return danhsachs.add(kh);
    }
    public ArrayList<KhachHang> layDanhSachKhachHang(){
        return this.danhsachs;
    }
    public  int timTheoCMND(String soCMND){
        int index = -1;
        for (KhachHang kh : danhsachs) {
            index++;
            if (kh.getSoCMND().equalsIgnoreCase(soCMND.trim())) {
                return index;
            }
        }
        return -1;
    }
    public boolean xoaTheoCMND(String soCMND){
        int index = timTheoCMND(soCMND);
        if (index!=-1) {
            danhsachs.remove(index);
            return true;
        }
        return false;
    }
    public KhachHang timKiemTheoCMND(String soCMND){
        int index = timTheoCMND(soCMND);
        if (index!=-1) {
            return danhsachs.get(index);
        }
        return null;
    }
    public ArrayList<KhachHang> layDanhSachTPHCM(String gaDen){
        ArrayList<KhachHang> dsMoi = new ArrayList<>();
        for (KhachHang kh : danhsachs) {
            if (kh.getGaDen().equalsIgnoreCase(gaDen.trim())) {
                dsMoi.add(kh);
            }
        }
        return dsMoi;
    }
}
