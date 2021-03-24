package com.company;

import java.util.Scanner;

public class Registration_system_4C_method2 {


    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        String[] storeName = new String[n];
        int[] storeCount = new int[n];
        input.nextLine();
        for (int i = 0; i < n; i++) {
            String str = input.next();
            int count = 0;

            for (int j = i - 1; j >= 0; j--) {
                if (str.length() > 32) {
                    break;
                }
                if (str.equals(storeName[j])) {
                    count = storeCount[j] + 1;
                    break;
                }

            }
            storeName[i] = str;
            storeCount[i] = count;
            if (count == 0) {
                System.out.println("OK");
            } else {
                System.out.println(str + "" + count);
            }
        }
    }

}

