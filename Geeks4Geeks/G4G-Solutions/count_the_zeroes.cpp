// https://practice.geeksforgeeks.org/problems/count-the-zeros/0/

#include <bits/stdc++.h>
using namespace std;
int firstOccurenceOfZero(int a[], int l, int h, int n)
{
    if(l<=h)
    {
       int mid = l + (h-l)/2;
       if((mid==0 || a[mid-1]==1) && a[mid]==0)
       return mid;
       else if (a[mid]==0 && a[mid-1]==0)
       return firstOccurenceOfZero(a,l,mid-1,n);
       else
       return firstOccurenceOfZero(a,mid+1,h,n);
    }
    return n;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
            cin>>a[i];
       cout<<n-firstOccurenceOfZero(a,0,n-1,n)<<endl;
	}
}
