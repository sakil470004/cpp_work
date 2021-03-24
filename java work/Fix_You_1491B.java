package com.company;

import java.util.Scanner;

public class Fix_You_1491B {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (t != 0) {
            String[] c = new String[101];
            int n = input.nextInt();
            int m = input.nextInt();

            input.nextLine();
            for (int i = 0; i < n; i++) {
               String s=input.nextLine();
               c[i]=s;
            }
            int count = 0;
            //left to right//here n-1 is finished
            for (int i = n - 1; i < n; i++) {
                for (int j = 0; j < m - 1; j++) {
                    if (c[i].charAt(j) == 'D') {
                        count++;

                    }
                }
            }
            //up to down//that's way i need not here n-1;
            for (int i = 0; i < n - 1; i++) {
                for (int j = m - 1; j < m; j++) {
                    if (c[i].charAt(j) == 'R') {
                        count++;
                    }
                }
            }
            System.out.println(count);
            t--;
        }
    }
}