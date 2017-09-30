package com.company;

import java.util.*;
import java.lang.*;
import java.math.*;

class Main
{
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner in = new Scanner(System.in);
        int testcases = 10;
        while(testcases-- > 0){
            String s = in.next();
            String d = in.next();
            BigInteger sum = new BigInteger(s);
            BigInteger diff = new BigInteger(d);
            BigInteger n = (sum.subtract(diff)).divide(BigInteger.valueOf(2));
            BigInteger k = n.add(diff);
            System.out.println(k);
            System.out.println(n);
        }
    }
}
