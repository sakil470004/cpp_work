package com.company;

import java.util.Scanner;

/**
 * Created by Mynul Isalm Sakil on 10/9/20.
 */
public class Dragons230A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int s = input.nextInt();
        int n = input.nextInt();
        int[] stangth = new int[n];
        int[] lvlBonus = new int[n];
        for (int i = 0; i < n; i++) {
            stangth[i] = input.nextInt();
            lvlBonus[i] = input.nextInt();
        }

        //imperfect number ordering algorithm
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n-i-1; j++)
            {
                if(stangth[j]>stangth[j+1])
                {
//swap value
                        int temp=0;
                        temp=stangth[j];
                        stangth[j]=stangth[j+1];
                        stangth[j+1]=temp;
                        temp=0;
                        temp=lvlBonus[j];
                        lvlBonus[j]=lvlBonus[j+1];
                        lvlBonus[j+1]=temp;
                }
            }
        }


        int total = s;
        int count =0;
        for (int i = 0; i < n; i++) {
            if (total > stangth[i]) {
                count++;
            }
            total += lvlBonus[i];
        }
        if (count==n) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }

    }
}
