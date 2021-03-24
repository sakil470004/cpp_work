package com.company;

import java.util.Scanner;

public class New_year_Transportation_500_A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int neededSell = input.nextInt();
        int result = 1;
        boolean isNeededSellFound = false;
        for (int i = 0; i < n - 1; i++) {
            int x = input.nextInt();
            result = result + x;
            System.out.println(result);
            if (result == neededSell) {
                isNeededSellFound=true;
            }
        }
        if(isNeededSellFound){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
    }
}
