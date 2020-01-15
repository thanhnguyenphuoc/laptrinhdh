/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package quanlytailieu;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

/**
 *
 * @author Administrator
 */
public class QuanLy {

    DanhSachTaiLieu ds;
    Scanner reader;

    public QuanLy() {
        ds = new DanhSachTaiLieu();
        reader = new Scanner(System.in);
    }

    public TaiLieu taoTaiLieuChung() {
        TaiLieu tl = new TaiLieu();
        
        System.out.println("Ma Tai Lieu");
        tl.setMaTaiLieu(reader.nextLine());
        System.out.println("Tieu De");
        tl.setTieuDe(reader.nextLine());
        System.out.println("Ten Nha Xuat Ban");
        tl.setTenNXB(reader.nextLine());
        System.out.println("So Ban Phat Hanh");
        tl.setSoBanPhatHanh(Integer.parseInt(reader.nextLine()));
        return tl;
    }

    public Sach taoDoiTuongSach() {
        Sach s = new Sach();
        System.out.println("Ma Tai Lieu");
        s.setMaTaiLieu(reader.nextLine());
        System.out.println("Tieu De");
        s.setTieuDe(reader.nextLine());
        System.out.println("Ten Nha Xuat Ban");
        s.setTenNXB(reader.nextLine());
        System.out.println("So Ban Phat Hanh");
        s.setSoBanPhatHanh(Integer.parseInt(reader.nextLine()));
        System.out.println("Nhap Ten Tac Gia");
        s.setTenTacGia(reader.nextLine());
        System.out.println("So Trang");
        s.setSoTrang(reader.nextLine());
        return s;
    }

    public Bao taoDoiTuongBao() {
        Bao b = new Bao();
        System.out.println("Ma Tai Lieu");
        b.setMaTaiLieu(reader.nextLine());
        System.out.println("Tieu De");
        b.setTieuDe(reader.nextLine());
        System.out.println("Ten Nha Xuat Ban");
        b.setTenNXB(reader.nextLine());
        System.out.println("So Ban Phat Hanh");
        b.setSoBanPhatHanh(Integer.parseInt(reader.nextLine()));
        System.out.println("Ngay Phat Hanh");
        b.setNgayPhatHanh(chuyenChuoiThanhNgay(reader.nextLine()));
        return b;
    }

    public TapChi taoDoiTuongTapChi() {
        TapChi tc = new TapChi();
        System.out.println("Ma Tai Lieu");
        tc.setMaTaiLieu(reader.nextLine());
        System.out.println("Tieu De");
        tc.setTieuDe(reader.nextLine());
        System.out.println("Ten Nha Xuat Ban");
        tc.setTenNXB(reader.nextLine());
        System.out.println("So Ban Phat Hanh");
        tc.setSoBanPhatHanh(Integer.parseInt(reader.nextLine()));
        System.out.println("So Phat Hanh");
        tc.setSoPhatHanh(reader.nextLine());
        System.out.println("Thang nam Phat Hanh");
        tc.setNgayPhatHanh(reader.nextLine());
        return tc;
    }

    private Date chuyenChuoiThanhNgay(String str) {
        try {
            return new SimpleDateFormat("dd/MM/yyyy").parse(str);
        } catch (ParseException e) {
            System.out.println("Loi: " + e.getMessage());
        }
        return null;
    }

    public void themMoi() {
        int chon;
        do {
            System.out.println("1. Nhap sach");
            System.out.println("2. Nhap Bao");
            System.out.println("3. Nhap Tai Chi");
            System.out.println("0 EXIT");
            System.out.print("Chon = ");
            chon = Integer.parseInt(reader.nextLine());
            switch (chon) {
                case 1:
                    if (ds.themVaoDanhsach(taoDoiTuongSach())) {
                        System.out.println("Thanh Cong");
                    } else {
                        System.out.println("That Bai");
                    }
                    break;
                case 2:
                    if (ds.themVaoDanhsach(taoDoiTuongBao())) {
                        System.out.println("thanh cong");
                    } else {
                        System.out.println("that bai");
                    }
                case 3:
                    if (ds.themVaoDanhsach(taoDoiTuongTapChi())) {
                        System.out.println("thanh cong");
                    } else {
                        System.out.println("that bai");
                    }
            }
        } while (chon != 0);
    }

    public void inDoiTuong(TaiLieu e) {
        System.out.printf("%-5s %-10s %-20s %-5d",
                e.getMaTaiLieu(), e.getTieuDe(), e.getTenNXB(), e.getSoBanPhatHanh());
        if (e instanceof Sach) { // Neu e la the hien cua Sach thi ep kieu
            Sach s = (Sach) e;  // ky thuat ep kieu
            System.out.printf("%-20s %-5d",
                    s.getTenTacGia(), s.getSoTrang());
        } else if (e instanceof TapChi) { // Neu e la the hien cua Sach thi ep kieu
            TapChi tl = (TapChi) e;  // ky thuat ep kieu
            System.out.printf("%-10s %-10s",
                    tl.getNgayPhatHanh(), tl.getNgayPhatHanh());
        } else {
            Bao b = (Bao) e;
            System.out.printf("%-10s", b.getNgayPhatHanh());
        }
    }

    public void inToanBoDanhSach() {
        for (TaiLieu tl : ds.layToanBoDanhSach()) {
            inDoiTuong(tl);
        }
    }

    public void Menu() {
        int chon;
        do {
            System.out.println("1. Them Moi");
            System.out.println("2. In Danh Sach");
            System.out.println("3. tim Kiem");
            System.out.println("0 EXIT");
            chon = Integer.parseInt(reader.nextLine());
            switch (chon) {
                case 1:
                    themMoi();
                    break;

                case 2:
                    this.inToanBoDanhSach();
                    break;
            }
        } while (chon != 0);
    }

}
