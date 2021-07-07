// https://practice.geeksforgeeks.org/problems/taking-input-java/1/



/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;


 // } Driver Code Ends


//User function Template for Java

class Geeks{
    
    // Function to take input using Scanner class
    static void IOFunction(){
        Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		while(t-- > 0){
		    
		    int a  = sc.nextInt();
		    System.out.println(a);
		    float b =  sc.nextFloat();
		    System.out.println(b);
		    long c = sc.nextLong();
		    System.out.println(c);
		    byte d = sc.nextByte();
		    System.out.println(d);
		    sc.nextLine();
		    String e = sc.nextLine();
		    System.out.println(e);
		    
		    
		}
		
    }
    
}

// { Driver Code Starts.


class GFG {
    
    // Driver Code
    public static void main (String[] args) {
	    
	       //Creating an object of class Geeks
	       Geeks g = new Geeks();
		
		   //Calling the IOFunction() of class Geeks
		   g.IOFunction();
	}
}  // } Driver Code Ends
