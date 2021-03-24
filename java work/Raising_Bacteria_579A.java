package com.company;

import java.util.Scanner;

/**
 * Created by Mynul Isalm Sakil on 9/27/20.
 */
public class Raising_Bacteria_579A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int count = 0;
        while (x / 2 != 0) {
            if (x % 2 == 1) {
                count++;
            }
            x = x / 2;
        }
        System.out.println(count+1);
    }
}
//536870911