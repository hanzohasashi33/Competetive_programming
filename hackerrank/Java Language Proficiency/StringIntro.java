import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        System.out.println((A.length() + B.length()));
        if(A.compareTo(B) > 0)
        {
            System.out.println("Yes");
        }
        else 
        {
            System.out.println("No");
        }
        String cap1 = A.substring(0, 1).toUpperCase() + A.substring(1);
        String cap2 = B.substring(0, 1).toUpperCase() + B.substring(1);
        System.out.println(cap1 + " " + cap2); 
    }
}



