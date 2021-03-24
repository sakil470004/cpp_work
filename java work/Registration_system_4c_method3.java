package com.company;

import java.util.Arrays;
import java.util.Scanner;

public class Registration_system_4c_method3 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        String[] storeName = new String[n];
        int[] storeCount = new int[n];
        input.nextLine();
        for (int i = 0; i < n; i++) {
            storeName[i] = input.next();
        }
        Arrays.sort(storeName);

        String str = storeName[0];
        System.out.println("OK");

        for (int i = 1; i < n; i++) {
            String str2=storeName[i];
            if(str.equals(str2)){
                int oldCount=0;
            }
        }
    }
}
