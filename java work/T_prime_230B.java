package com.company;

import java.util.Scanner;

/**
 * Created by Mynul Isalm Sakil on 10/4/20.
 */
public class T_prime_230B {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        long m = input.nextLong();

        for (int j = 0; j < m; j++) {
            long n = input.nextLong();

            long x = (long) Math.sqrt(n);
//            System.out.println(x);
            if (((x * x) == n) && isPrimeNumber(x)) {
//                System.out.println(n+" "+x*x);
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }

        }
    }


    static boolean isPrimeNumber(long n) {
        if (n < 2) {
            return false;
        } else if (n == 2) {
            return true;
        }
        if (n % 2 == 0) {
            return false;
        }
        long sqrt = (long) Math.sqrt(n);
        for (long i = 3; i <=sqrt; i+=2) {
            if (n % i == 0) {
                return false;
            }

        }
        return true;
    }
}
