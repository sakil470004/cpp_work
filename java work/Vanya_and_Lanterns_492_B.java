package com.company;

import java.util.Arrays;
import java.util.Scanner;

public class Vanya_and_Lanterns_492_B {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int[] array = new int[n];
        for (int i = 0; i < n; i++) {
            array[i] = input.nextInt();
        }
        Arrays.sort(array);
        int x = array[1] - array[0];
        boolean isNotInculdePlusOne = false;
        boolean fastTime = true;
        for (int i = 1; i < n; i++) {
            int y = array[i] - array[i - 1];
            if (y > x) {
                x = y;
                if (fastTime) {
                    isNotInculdePlusOne = true;
                }
                fastTime = false;
            }
        }
        if (!isNotInculdePlusOne) {
            System.out.println((((double)x+1)/2)+"");
        }else{
            System.out.println((((double)x)/2)+"");

        }


    }
}
