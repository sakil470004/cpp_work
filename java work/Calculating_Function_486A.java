package com.company;

import java.util.Scanner;

public class Calculating_Function_486A {
    public static void main(String[] args) {
        Scanner input =new Scanner(System.in);
        long n = input.nextLong();
long total =0;

            if(n%2==0){
                    total=n/2;
            }else{
                    total = -(n/2)-1;
            }

        System.out.println(total);
    }
}
