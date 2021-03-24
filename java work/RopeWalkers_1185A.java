package com.company;

import java.util.Arrays;
import java.util.Scanner;

public class RopeWalkers_1185A {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int[] arrayList = new int[3];

        for (int i = 0; i < 3; i++) {
            arrayList[i] = input.nextInt();
        }
        Arrays.sort(arrayList);
        int d = input.nextInt();

        int a = 0;
        if (Math.abs(arrayList[1] - arrayList[0]) < d) {
            a = Math.abs(arrayList[1] - arrayList[0]);
            a = Math.abs(d - a);
        }

        int b = 0;
        if (Math.abs(arrayList[2] - arrayList[1]) < d) {


            b = Math.abs(arrayList[2] - arrayList[1]);
            b = Math.abs(d - b);
        }
        System.out.println(a + b);

    }
}
