// https://practice.geeksforgeeks.org/problems/learn-to-comment-java/1


//Initial Template for Java

//Initial Template for C++
//Initial Template for C++

import java.util.*;
import java.io.*;


 // } Driver Code Ends


//User function Template for Java

//Back-end complete function Template for Java

class Geeks{
    
    // Function to print a and c
    //comment the line that outputs b
    static void comment(int a, int b, int c){
        System.out.println(a);
        //System.out.println(b);
        System.out.println(c);
    }
    
}

// { Driver Code Starts.
 
class gfg{
    
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int testcase = sc.nextInt();
        
        // Taking input for all testcases
        while(testcase-- > 0){
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            
            Geeks g = new Geeks();
            g.comment(a, b, c);
        }
    }
    
}   // } Driver Code Ends
