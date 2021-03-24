package com.company;

import java.util.Scanner;

/**
 * Created by Mynul Isalm Sakil on 10/25/20.
 */
public class Insomnia_cure_148a {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int k,l,m,n,d,count=0;
        k=input.nextInt();
        l=input.nextInt();
        m=input.nextInt();
        n=input.nextInt();
        d=input.nextInt();

        for (int i = 1; i <=d ; i++) {
            if(i%k==0||i%l==0||i%m==0||i%n==0){
                count++;
            }
        }
        System.out.println(count);

    }
}
