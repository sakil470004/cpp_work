package com.company;

import java.util.ArrayList;
import java.util.Scanner;

public class IQ_Test_25A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] array1 = new int[n];
        ArrayList<Integer> evenArrayList = new ArrayList<>();
        ArrayList<Integer> oddArrayList = new ArrayList<>();

        int even = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            array1[i] = input.nextInt();
            if (array1[i] % 2 == 0) {
                even++;
                evenArrayList.add(i);//give the index in arraylist
            } else {
                odd++;
                oddArrayList.add(i);
            }
        }
        if (even > 1 && odd == 1) {
            System.out.println(oddArrayList.get(0)+1);
        } else if (odd > 1 && even == 1) {
            System.out.println(evenArrayList.get(0)+1);
        }

    }
}
