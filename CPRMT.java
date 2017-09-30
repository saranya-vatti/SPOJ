package com.company;

import java.util.*;
import java.lang.*;

class Main
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner in = new Scanner(System.in);
        while(in.hasNext()){
            String s1 = in.next();
            String s2 = in.next();
            int[] alpha1 = new int[26];
            for (int i = 0; i < s1.length(); i++){
                int ascii = (int) s1.charAt(i);
                alpha1[ascii-97]++;
            }
            int[] alpha2 = new int[26];
            for (int i = 0; i < s2.length(); i++){
                int ascii = (int) s2.charAt(i);
                alpha2[ascii-97]++;
            }
            int[] ans = new int[26];
            for (int i = 0; i < 26; i++){
                ans[i] = alpha1[i] < alpha2[i] ? alpha1[i] : alpha2[i];
            }
            for (int i = 0; i < 26; i++){
                for(int j=0;j<ans[i];j++) {
                    System.out.print((char)(i+97));
                }
            }
            System.out.println();
        }
    }
}
