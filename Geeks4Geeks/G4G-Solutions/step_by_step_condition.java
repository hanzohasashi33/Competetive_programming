// https://practice.geeksforgeeks.org/problems/step-by-step-condition-java/1/


//Initial Template for Java

/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;

class GFG {
	public static void main (String[] args) {
		
		//taking input using Scanner class
		Scanner sc = new Scanner(System.in);
		
		//taking testcases count
		int t=sc.nextInt();
		while(t-->0)
		{
		    //taking n
		    int n =sc.nextInt();
		
	        //creating an object of class Geeks	
		    Geeks obj=new Geeks();
		    
		    //calling isDivisbleByPrime()
		    //method of class Geeks
		    obj.isDivisibleByPrime(n);
		}
	
		
	}
}

 // } Driver Code Ends


//User function Template for Java


//Back-end complete function Template for Java
class Geeks {
	 static void isDivisibleByPrime (int n) 
	 {
       String x = "";
       if(n%11==0){
           x = "Eleven";
       }
       else if(n%3==0){
           x = "Three";
       }
       else if(n%2==0){
           x = "Two";
       }
       else{
           x = "-1";
       }
       System.out.println(x);

	 }

}

// { Driver Code Starts.

/*package whatever //do not write package name here */  // } Driver Code Ends
