package com.company;

import java.util.ArrayList;
import java.util.Scanner;

public class Registration_system_4C {

    static ArrayList<String> arrayList = new ArrayList<>();

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();


        input.nextLine();//for hande enter key;

        for (int i = 0; i < n; i++) {
            String str = input.nextLine();

            if (isAlreadyExist(str)) {

                String x = null;
                while (isAlreadyExist(str)) {
                    str=renameString(str);
                }
                System.out.println(str);
                arrayList.add(str);
            } else {
                arrayList.add(str);
                System.out.println("OK");
            }
        }
    }

    public static boolean isAlreadyExist(String s) {
        for (int i = 0; i < arrayList.size(); i++) {
            if (arrayList.get(i).equals(s)) {
                return true;
            }
        }
        return false;
    }

    public static String renameString(String s) {
        String extra = s.charAt(s.length() - 1) + "";
        int newNumber = 0;
        String returnStirng = null;
        try {
            newNumber = Integer.parseInt(extra) + 1;

            returnStirng = s.replace(extra, newNumber + "");
        } catch (Exception e) {
            newNumber = newNumber + 1;
            returnStirng = s + newNumber;

        }
        return returnStirng;
    }
}
