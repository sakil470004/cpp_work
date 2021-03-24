package com.company;

import java.util.Scanner;

public class Drinks_200B {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] array = new int[n];
        double x =0;
        for (int i = 0; i < n; i++) {
            array[i]=input.nextInt();
            x+=array[i];
        }
        double y = x/n;
        System.out.println(y);

    }
}
