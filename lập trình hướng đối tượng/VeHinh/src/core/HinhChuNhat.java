/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package core;

import java.util.Scanner;

/**
 *
 * @author thanh
 */
public class HinhChuNhat {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        System.out.print("Nhập a:");
        int a = reader.nextInt();
        System.out.print("Nhâp b:");
        int b = reader.nextInt();
        for (int i = 1; i <=a; i++) {
            for (int j = 1; j <=b; j++) {
                    System.out.print("* ");
            }
            System.out.println("");
        }
    }
}
