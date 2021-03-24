package com.company;

import java.util.Scanner;

public class RestoreThePermutationByMerger1385B {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        //the is 1st for loop
            int t = input.nextInt();
        for (int k = 0; k < t; k++) {
            int n = input.nextInt();
            int[] array = new int[n*2];
            for (int i = 0; i < array.length; i++) {
                array[i] = -1;
            }

            for (int i = 0; i < array.length; i++) {
                int x = input.nextInt();
                for (int j = 0; j <= i; j++) {
                    if (array[j] == x) {
                        break;
                    } else if (j == i && array[j] != x) {
                        array[i] = x;
                    }
                }

            }
            for (int i = 0; i < array.length; i++) {
                if (array[i] != -1) {
                    System.out.print(array[i] + " ");
                }
            }
            System.out.println();
        }
    }
}
