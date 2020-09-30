// https://practice.geeksforgeeks.org/problems/xor-of-a-given-range/1


#include<bits/stdc++.h>
using namespace std;  
int gtXor(int arr[], int n,int a,int b);
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n>>a>>b;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int m=min(a,b);
		int l=max(a,b);
		cout<<gtXor(arr,n,m,l)<<endl;
	}
    return 0;
}// } Driver Code Ends
/*Complete the function below*/


int gtXor(int arr[], int n,int a,int b)
{
    int sum = 0;
    for(int i=a;i<=b;i++)
    {
        sum^=arr[i];
    }
    return sum;
}
