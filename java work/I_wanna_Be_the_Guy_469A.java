package com.company;

import java.util.ArrayList;
import java.util.Scanner;

/**
 * Created by Mynul Isalm Sakil on 10/25/20.
 */
public class I_wanna_Be_the_Guy_469A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n =input.nextInt();

        ArrayList<Integer> s = new ArrayList<>();

        for (int i = 0; i < (2*n)-1; i++) {
            int a=input.nextInt();
            s.add(a);
        }
        boolean isOk=true;
        for (int i = 1; i <= n; i++) {
            if(!s.contains(i)){
                isOk=false;
                break;
            }
        }
        if(isOk){
            System.out.println("I become the guy.");
        }else{
            System.out.println("Oh, my keyboard!");
        }
    }
}
