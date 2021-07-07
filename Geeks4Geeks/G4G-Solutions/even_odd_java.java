// https://practice.geeksforgeeks.org/problems/even-odd-java/1/


//Initial Template for Java


import java.io.*;
import java.util.*;

class GFG {
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int t=sc.nextInt();
		
		while(t-->0)
		{
    		int a = sc.nextInt();
    		int b = sc.nextInt();
    		Geeks obj=new Geeks();
    		obj.evenOdd(a,b);
		}
		
	
		
	}
}


 // } Driver Code Ends


//User function Template for Java


// Function to check if number is even or odd
class Geeks {
    // 
	 static void evenOdd (int a,int b) 
	 {
		if(a%2==0){
		    System.out.println(a+"\n"+b);
		}
	    else{
	        System.out.println(b+"\n"+a);
	    }
	 }
}




// { Driver Code Starts.



  // } Driver Code Ends
