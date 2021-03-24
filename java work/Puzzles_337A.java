package com.company;

import java.util.Arrays;
import java.util.Scanner;

public class Puzzles_337A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int[] array = new int[m];
        for (int i = 0; i < m; i++) {
            array[i] = input.nextInt();
        }
        Arrays.sort(array);
        int x = array[n - 1] - array[0];
        for (int i = 0; i < m+3/4; i++) {
            if (i + n-1 < m) {
                if ((array[i + n-1] - array[i] < x)) {
                    x = array[i + n-1] - array[i];
                }
            }
        }
        System.out.println(x);
    }
}
