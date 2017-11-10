/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	private static HashMap<Integer, Long> dp = new HashMap<>();
    private static long max(int n) {
        if(dp.containsKey(n)) {
            return dp.get(n);
        }
        long ans = Math.max(n, max(n/4) + max(n/3) + max(n/2));
        dp.put(n, ans);
        return ans;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n;
        dp.put(2, (long)2);
        dp.put(0, (long)0);
        while(in.hasNextInt()) {
            n=Integer.parseInt(in.nextLine());
            System.out.println(max(n));
        }
    }
}