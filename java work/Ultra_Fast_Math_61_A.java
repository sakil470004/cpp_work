package com.company;

import java.util.Scanner;

public class Ultra_Fast_Math_61_A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String str1 = input.nextLine();

        String str2 =input.nextLine();
        char[] car1 = str1.toCharArray();
        char[] car2 = str2.toCharArray();
        StringBuilder sb =new StringBuilder();
        for (int i = 0; i < car1.length; i++) {
            if( car1[i]==car2[i]){
                sb.append("0");
            }else{
                sb.append("1");
            }
        }
        System.out.println(sb);
    }
}
