// https://practice.geeksforgeeks.org/problems/logical-operators/1


//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void logicOp(int a, int b);

 // } Driver Code Ends


//User function Template for C++


void logicOp(int a, int b)
{
    /*output (a&&b), (a||b), and ((!a)&&(!b))separated by spaces*/ 
    cout<<(a&&b)<<" "<<(a||b)<<" "<<((!a)&&(!b));
    cout<<endl;
}

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    logicOp(a,b);
	    
	}
	return 0;
}  // } Driver Code Ends
