import java.util.*;
import java.lang.*;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0) {
            String s = in.next();
            char[] arr = s.toCharArray();
            int count=0;
            for(int i=0;i<s.length();i++) {
                switch(arr[i]) {
                    case '6':
                    case '9':
                    case '0':
                        count++;
                        break;
                    case '8':
                        count+=2;
                        break;
                    default:
                        break;
                }
            }
            System.out.println(count);
        }
	}
}