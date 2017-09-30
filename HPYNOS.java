package com.company;

import java.util.*;
import java.lang.*;
import java.math.*;

class Main
{
    private static void happy(int[] array,int n, int counter) {
        int sum = 0;
        int curr = n;
        while(curr != 0) {
            int digit = curr%10;
            curr = curr/10;
            sum += (digit * digit);
        }
        if(sum == 1) {
            System.out.println(counter+1);
            return;
        }
        for(int i=0;i<=counter;i++) {
            if(sum==array[i]) {
                System.out.println(-1);
                return;
            }
        }
        array[counter++] = sum;
        happy(array, sum, counter);
    }
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] array = new int[100];
        happy(array,n, 0);
    }
}
