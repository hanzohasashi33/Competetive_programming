// https://practice.geeksforgeeks.org/problems/bitwise-operators-java/1/


//Initial Template for Java

/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;


 // } Driver Code Ends


//User function Template for Java

// Function to perform bitwise manipulations
// a, b and c are input integers
class Geeks{
    static void bitWiseOp(int a, int b, int c){
        
        int d = a ^ a;
        int e = c ^ b;
        int f = a & b;
        int g = c | (a ^ a);
        int x = ~e;

        System.out.println(d);
        System.out.println(e);
        System.out.println(f);
        System.out.println(g);
        System.out.println(x);
        
        
    }
}

// { Driver Code Starts.

class GFG {
	public static void main (String[] args) {
		
		//taking input using scanner class
		Scanner sc = new Scanner(System.in);
		
		
		int testcases = sc.nextInt();
		
		while(testcases-- > 0){
		    
		    //taking a,b,c
		    int a = sc.nextInt();
		    int b = sc.nextInt();
		    int c = sc.nextInt();
		    
		    //creating an object of class Geeks
		    Geeks g = new Geeks();
		    
		    //calling the method bitWiseOp()
		    //of class Geeks and passing
		    //a,b,c as arguments
		    g.bitWiseOp(a, b, c);
		}
	}
}                         // } Driver Code Ends
