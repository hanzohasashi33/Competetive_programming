// https://practice.geeksforgeeks.org/problems/for-loop-primecheck-java/1/


//Initial Template for Java
//Initial Template for C++

/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;

class GFG {
	public static void main (String[] args) {
		
		//taking input using Scanner class
		Scanner sc = new Scanner(System.in);
		
		//take testcases
		int t=sc.nextInt();
		while(t-->0)
		{
		    //taking the number
		    int n =sc.nextInt();
		    Geeks obj=new Geeks();
		    
		    //caling isPrime method
		    //with n as argument
		    obj.isPrime(n);
		}
	
		
	}
}


 // } Driver Code Ends


//User function Template for Java


//Back-end complete function Template for Java

class Geeks {
	 static void isPrime (int n) 
	 {
	     if(n==1){
	         System.out.println("No");
	         return;
	     }
            for(int i=2;i<=Math.sqrt(n);i++)
            {
                if(n%i==0){
                    System.out.println("No");
                    return;
                }
            }
            
        System.out.println("Yes");
	 }

}

// { Driver Code Starts.
  // } Driver Code Ends
