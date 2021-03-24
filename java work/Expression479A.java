package com.company;

import java.util.Scanner;

public class Expression479A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a,b ,c,x,y,z,xx,yy;
         a=input.nextInt();
         b=input.nextInt();
         c=input.nextInt();

         x=a+b*c;
         y=a*(b+c);
         z=a*b*c;
         xx=(a+b)*c;
         int zz = a+b+c;
      yy=   Math.max(Math.max(x,y),Math.max(zz,Math.max(z,xx)));
        System.out.println(yy);
    }
}
