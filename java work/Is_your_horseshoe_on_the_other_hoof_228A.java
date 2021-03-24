package com.company;

import java.util.Arrays;
import java.util.Scanner;

/**
 * Created by Mynul Isalm Sakil on 10/25/20.
 */
public class Is_your_horseshoe_on_the_other_hoof_228A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] s = new int[4];

        for (int i = 0; i < 4; i++) {
            s[i] = input.nextInt();
        }

        Arrays.sort(s);
        int count =0;
        for (int i = 0; i < 3; i++) {
            if(s[i]==s[i+1]){
                count++;
            }
        }
        System.out.println(count);
    }
}
