// https://practice.geeksforgeeks.org/problems/logical-operators-java/1/



/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;


 // } Driver Code Ends


//User function Template for Java

class Geeks{
    
    static void logicOp(boolean a, boolean b){
        /*output (a&&b), (a||b), and ((!a)&&(!b))separated by spaces*/
        System.out.println((a&&b)+" "+(a||b)+" "+((!a)&&(!b)));
    }
}

// { Driver Code Starts.

class GFG {
	public static void main (String[] args) {
		
		//taking input using Scanner class
		Scanner sc = new Scanner(System.in);
		
		//taking total testcases
		int testcases = sc.nextInt();
		
		while(testcases-- > 0){
		    
		    //taking the two boolean values
		    boolean a = sc.nextBoolean();
		    boolean b = sc.nextBoolean();
		    
		    //creating an object of class Geeks
		    Geeks g = new Geeks();
		    
		    //calling the method logicOp() 
		    //and passing a,b as arguments
		    g.logicOp(a, b);
		}
	}
}  // } Driver Code Ends
