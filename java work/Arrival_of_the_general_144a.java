package com.company;

import java.util.Scanner;

/**
 * Created by Mynul Isalm Sakil on 10/27/20.
 */
public class Arrival_of_the_general_144a {
    public static void main(String[] args) {

        int n, i, max, min, index_min=0, index_max=0;
        Scanner input = new Scanner(System.in);

        n = input.nextInt();
        int[] a = new int[n];
        for (i = 0; i < n; i++) {
            a[i] = input.nextInt();
        }
        max=0;
        min=101;
        for ( i = 0; i <n ; i++) {
            if(a[i]>max){
                max=a[i];
                index_max=i;
            }
            if(a[i]<=min){
                min=a[i];
                index_min=i;
            }
        }
        n=n-1;
        if(index_max>index_min){
            index_min=index_min+1;
        }
        System.out.println(index_max+n-index_min);
    }
}
