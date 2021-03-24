package com.company;

import java.util.Scanner;

/**
 * Created by Mynul Isalm Sakil on 10/6/20.
 */
public class XeniaAndRingroad_339B {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int[] arr = new int[m];
        for (int i = 0; i < m; i++) {
            arr[i] = input.nextInt();
        }
        //dakhi dakhi
        long count = arr[0]-1;
        for (int i = 0; i < m - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                count += arr[i+1]+n-arr[i];
            }else{
              count+=arr[i+1]-arr[i];

            }
        }
        System.out.println(count);
    }
}
