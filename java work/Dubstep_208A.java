package com.company;

import java.util.Scanner;

/**
 * Created by Mynul Isalm Sakil on 10/5/20.
 */
public class Dubstep_208A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();

        //removeing fast wub wub
        s = removeFirstWUB(s);
//remove all Wub
        s=s.replace("WUB"," ");
        //remove double space
        s=s.replace("  "," ");
        System.out.println(s);

    }

    private static String removeFirstWUB(String str) {
        if (str.startsWith("WUBWUB")) {
            str = str.replaceFirst("WUBWUB", "");
        } else if (str.startsWith("WUB")) {
            str = str.replaceFirst("WUB", "");
        }
        return str;
    }
}
