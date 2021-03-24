package com.company;

import java.util.ArrayList;
import java.util.Scanner;

/**
 * Created by Mynul Isalm Sakil on 10/12/20.
 */
public class Tareq_question_prime_factor {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        long sqrt = (long) Math.sqrt(n);
        long x = n;
        int count = 0;
        ArrayList<Long> arrayList = new ArrayList<>();
        for (long i = 2; i < n; i++) {
            if (x == 1 || x == 0) {
//                System.out.println("is it on break");

                break;
            }
            if (isPrimeNumber(i)) {

//                System.out.println("is it on prime "+i);
                if (x % i == 0) {
                    arrayList.add(i);
                    count++;
                    x = x / i;
                }

            }
//            System.out.println("is it on for " + i);

        }

        System.out.println("count "+count);

        for (int i = 0; i < arrayList.size(); i++) {
            System.out.println("the prime_ factor "+arrayList.get(i));
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
        for (long i = 3; i <= sqrt; i += 2) {
            if (n % i == 0) {
                return false;
            }

        }
        return true;
    }
}
