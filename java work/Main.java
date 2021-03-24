package com.company;

import java.util.Arrays;
import java.util.Scanner;

public class Main {


    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] arrays = new int[n];
        for (int i = 0; i < n; i++) {
            arrays[i] = input.nextInt();
        }
        boolean isSomething = checkDouble(arrays);
        while (isSomething) {

            int[] array2 = Arrays.copyOf(arrays,arrays.length);
            arrays=new int[arrays.length-1];
            for (int i = 0; i < arrays.length; i++) {
                arrays[i]=array2[i+1];
            }

            isSomething=checkDouble(arrays);
        }


        System.out.println(n - arrays.length+1);
    }

    public static boolean checkDouble(int[] array) {
        for (int i = 0; i < array.length; i++) {
            for (int j = i + 1; j < array.length; j++) {
                if (array[i] == array[j]) {
                    // got the duplicate element

                    return true;
                }
            }
        }
        return false;
    }


}
