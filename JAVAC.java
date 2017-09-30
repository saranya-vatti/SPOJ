package com.company;

import java.util.*;
import java.lang.*;
import java.math.*;

class Main
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner in = new Scanner(System.in);
        while(in.hasNext()){
            String s = in.next();
            boolean hasUppercase = !s.equals(s.toLowerCase());
            boolean hasUnderscore = s.indexOf('_') != -1;
            int underscoreIndex = s.indexOf('_');
            String ans = "";
            if (underscoreIndex == 0) {
                ans = "Error!";
            } else if (hasUnderscore && hasUppercase) {
                ans = "Error!";
            } else if (Character.isUpperCase(s.charAt(0))) {
                ans = "Error!";
            } else {
                for (int i = 0; i < s.length(); i++) {
                    if(s.charAt(i) == '_') {
                        if (i<s.length()-1) {
                            i++;
                            if(s.charAt(i)=='_') {
                                ans = "Error!";
                                break;
                            }
                            ans += Character.toUpperCase(s.charAt(i));
                        } else {
                            ans = "Error!";
                            break;
                        }
                    } else if (Character.isUpperCase(s.charAt(i))) {
                        ans += '_';
                        ans += Character.toLowerCase(s.charAt(i));
                    } else {
                        ans += s.charAt(i);
                    }
                }
            }
            System.out.println(ans);
        }
    }
}
