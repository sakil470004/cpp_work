package com.company;

import java.util.Scanner;

public class Suborrays_1391A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        //here t
        int t = input.nextInt();
        for (int k = 0; k < t; k++) {

            int n = input.nextInt();
            for (int i = 1; i <= n; i++) {
                System.out.print(i + " ");
            }
            System.out.println();
        }
    }
}
