// https://practice.geeksforgeeks.org/problems/data-types-java/1/


//Initial Template for Java

/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;


 // } Driver Code Ends


//User function Template for Java

class Geeks{
    
    // Function to do operations with different data types
    static void dataTypes(int a, float b, double c, long l, byte d){
        
        double p = c/b;
        double q = b/a;
        double r = c/a;
        double m = r+l;
        int s = a/d;
        
        //Printing all the results 
        System.out.println(p + " " + q + " " + r + " " + m + " " + s);
        
    }
}

// { Driver Code Starts.

class GFG {
    // Driver code
	public static void main (String[] args) {
	    
	    // Input using Scanner class
	    Scanner sc = new Scanner(System.in);
		int a;
		float b;
		double c;
		long l;
		byte d;
		
		//Taking input number of testcases 
		int t = sc.nextInt();
		
		while(t-- > 0){
		    
		    //taking input all the different datatypes in their respective variables
		    a = sc.nextInt();
		    b = sc.nextFloat();
		    c = sc.nextDouble();
		    l = sc.nextLong();
		    d = sc.nextByte();
		    
		    //Creating an object of class Geeks
		    Geeks g = new Geeks();
		    
		    //Calling dataTypes method of class Geeks
		    g.dataTypes(a, b, c, l, d);
		}
	}
}  // } Driver Code Ends
