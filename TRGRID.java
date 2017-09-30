package com.company;

import java.util.*;
import java.lang.*;
import java.math.*;

class Main
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0) {
            int n = in.nextInt();
            int m = in.nextInt();
            if(n<=m) {
                if(n%2==0) {
                    System.out.println("L");
                } else {
                    System.out.println("R");
                }
            } else {
                if(m%2==0) {
                    System.out.println("U");
                } else {
                    System.out.println("D");
                }
            }
        }
    }
}
