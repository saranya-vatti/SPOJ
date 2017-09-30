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
            int n1=in.nextInt();
            String str;
            while(true) {
                str = in.next().trim();
                if(str.equals("=")) {
                    System.out.println(n1);
                    break;
                }
                int n2=in.nextInt();
                if(str.equals("+")) {
                    n1 = n1+n2;
                }
                if(str.equals("*")) {
                    n1 = n1*n2;
                }
                if(str.equals("/")) {
                    n1 = n1/n2;
                }
                if(str.equals("-")) {
                    n1 = n1-n2;
                }
            }
        }
    }
}
