package com.company;

import java.util.Scanner;

public class EvenOdds318A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        long k = input.nextLong();
        long x;

        if (n % 2 == 0) {
            if (k <= n / 2) {
                System.out.println(2 * k - 1);
            } else {
                k = k - n / 2;
                System.out.println(2 * k);


            }
        } else {
            if (k <= (n / 2) + 1) {
                System.out.println(2 * k - 1);

            } else {
                k = k - (n / 2) - 1;
                System.out.println(2 * k);

            }
        }

    }
}
