package com.company;

import java.util.Scanner;

/**
 * Created by Mynul Isalm Sakil on 10/10/20.
 */
public class Cut_ribbon_189_A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = input.nextInt();

        int a = input.nextInt();
        int b = input.nextInt();
        int c = input.nextInt();
        int i,j,z,count=0,y;
        y=Math.min(a,Math.min(b,c));
        y=n/y;
        for(i=y;i>=0;i--){
            for(j=0;j<=y;j++){
                z=Math.abs((n-(a*i+b*j))/c);
                if((a*i+b*j+c*z)==n){
                    count=Math.max(count,i+j+z);
                }
            }
        }
        System.out.println(count);

    }
}
