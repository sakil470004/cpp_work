package com.company;

import java.util.Scanner;

public class Bad_Triangle_1398A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
            int t = input.nextInt();
        for (int j = 0; j < t; j++) {
            int n = input.nextInt();
            int[] array = new int[n];
            boolean notImpossible = false;
            for (int i = 0; i < array.length; i++) {
                array[i] = input.nextInt();
            }
            for (int i = 2; i < array.length; i++) {
                if ((array[0] + array[1])<= array[i]) {
                    System.out.println(1 + " " + 2 + " " + (i+1));
                    notImpossible = false;
                    break;
                } else {
                    notImpossible = true;
                }
            }
            if (notImpossible) {
                System.out.println(-1);
            }
        }
    }
}
