// https://practice.geeksforgeeks.org/problems/square-root/1


#include<bits/stdc++.h>
using namespace std;

long long int floorSqrt(long long int x);
  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
long long int floorSqrt(long long int x) 
{
    long long int l = 1;
	long long int r = x;
	while(l<=r)
	{
		long long int mid = l + (r-l)/2;
		if(x/mid==mid)
		{
			return mid;

		}
		else if(x/mid>mid)	
		{
			l = mid+1;
		}
		else
		{
			r = mid-1;
		}
	}
	return r/1;
}

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout << floorSqrt(n) << endl;
	}
    return 0;   
}
  // } Driver Code Ends
