package com.company;

import java.util.Scanner;

public class Be_Positive_1130A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] array = new int[n];
        double[] doubles = new double[n];
        int halfN;
        if (n % 2 == 0) {
            halfN = n / 2;
        } else {
            halfN = (n / 2) + 1;
        }

        input.nextLine();
        for (int i = 0; i < n; i++) {
            array[i] = input.nextInt();
        }
        int s=n;
        for (int i =1; i <= s; i++) {
            int p_count = 0;
            int n_count = 0;
            for (int j = 0; j < n; j++) {
                doubles[j] = (double) (array[j]) / i;
                if (doubles[j] > 0) {
                    p_count++;
                } else if (doubles[j] < 0) {
                    n_count++;
                }
            }
            if ( p_count >= halfN) {
                System.out.println(i);
//                System.out.println(halfN);
//                System.out.println(n_count+" "+p_count);
                return;
            }else if( n_count>=halfN){
                System.out.println(-i);
                return;
            }

        }
        System.out.println(0);
    }
}
