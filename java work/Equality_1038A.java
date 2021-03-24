package com.company;

import java.util.Scanner;

public class Equality_1038A {

    public static void main(String[] args) {
//        System.out.println("Hello world");
        int[] alpabate = new int[26];
        int n, k;
        String s;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        k = input.nextInt();
        input.nextLine();
        s = input.nextLine();
        for (int i = 0; i < n; i++) {
            int l = s.charAt(i) - 'A';
            alpabate[l]++;
//            System.out.println(alpabate[l]);
        }
        int m = n;
        for (int i = 0; i < k; i++) {
            m = Math.min(m, alpabate[i]);
//            System.out.println(m + " " + alpabate[i]);
        }
        System.out.println(m * k);

    }
}
