// https://practice.geeksforgeeks.org/problems/find-transition-point/1

#include<bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[],int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<transitionPoint(a,n)<<endl;
	}
	return 0;
}// } Driver Code Ends
int transitionPoint(int arr[],int n)
{
    int result = -1;
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(arr[mid]==0)
        {
            result = mid;
            l=mid+1;
        }
        else if(arr[mid]>0)
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    return result+1;
}
