import java.util.*;
import java.lang.*;

class Main
{
    public static void main (String[] args) throws java.lang.Exception
    {
        int a1,a2,a3;
        Scanner in = new Scanner(System.in);
        while (true) {
            a1 = in.nextInt();
            a2 = in.nextInt();
            a3 = in.nextInt();
            if (a1 == 0 && a2 == 0 && a3 == 0) {
                return;
            }
            if (a2 - a1 == a3 - a2) {
                System.out.println("AP " + (a3 + a3 - a2));
            } else {
                System.out.println("GP " + (a3 * (a3/a2)));
            }
        }
    }
}