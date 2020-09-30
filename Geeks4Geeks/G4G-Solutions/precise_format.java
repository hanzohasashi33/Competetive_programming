// https://practice.geeksforgeeks.org/problems/precise-fomat-java/1/


//Initial Template for Java


/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;


 // } Driver Code Ends


//User function Template for Java

class Geeks{
    
    static void printInFormat(float a, float b){
        float result = a/b;
        System.out.printf("%.7f %.3f\n",result,result);
        
        // Your code here to print upto 3 decimal places
        
    }    
    
}

// { Driver Code Starts.

class GFG {
	public static void main (String[] args) {
		
		//taking input using class Scanner
		Scanner sc = new Scanner(System.in);
		
		//taking testcases
		int testcases = sc.nextInt();
		
		while(testcases-- > 0){
		    
		    //taking 2 variables a,b
    		float a = sc.nextFloat();
    		float b = sc.nextFloat();
    		
    		//creating an object of class Geeks
    		Geeks g = new Geeks();
    		
    		//calling printInFormat() method
    		//of class Geeks
    		g.printInFormat(a, b);
		
		}
		
	}
}
  // } Driver Code Ends
