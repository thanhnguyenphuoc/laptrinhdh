
import java.util.ArrayList;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/**
 *
 * @author TinyThao
 */
public class DanhSachSach {

    ArrayList<Sach> danhSachs = new ArrayList<>();

    public boolean themVaoDanhSach(Sach s) {
        return danhSachs.add(s);
    }

    public ArrayList<Sach> layToanBoDanhSach() {
        return danhSachs;
    }

    public int timViTriSach(String maSach) {
        int index = -1;
        for (Sach s : danhSachs) {
            index++;
            if (s.getMaSach().equalsIgnoreCase(maSach)) {
                return index;
            }
        }
        return -1;
    }

    public Sach timSachTheoMaChiDinh(String maSach) {
        int index = timViTriSach(maSach);
        if (index != -1) {
            return danhSachs.get(index);
        } else {
            return null;
        }
    }

    public boolean xoaSachTheoMa(String maSach) {
        int index = timViTriSach(maSach);
        if (index != -1) {
            danhSachs.remove(index);
            return true;
        }
        return false;
    }

    public double tinhTongThanhTienTheoTungLoai(String loaiSach) {
        double tong = 0;
        for (Sach s : danhSachs) {
            if (s instanceof SachGiaoKhoa) {
                SachGiaoKhoa gk = (SachGiaoKhoa) s;               
                tong += gk.tinhThanhTien();
            } else {
                SachThamKhoa tk = (SachThamKhoa) s;
                tong += tk.tinhThanhTien();
            }
        }
        return tong;
    }

    public ArrayList<Sach> inSachTheoTinhTrang(String tinhTrang) {
        ArrayList<Sach> dsMoi = new ArrayList<>();
        for (Sach s : danhSachs) {
            if (s instanceof SachGiaoKhoa) {
                SachGiaoKhoa gk = (SachGiaoKhoa) s;
                if ((tinhTrang.trim()).equalsIgnoreCase(gk.getTinhTrang())) {
                    dsMoi.add(gk);
                }
            }
        }
        return dsMoi;
    }

}
