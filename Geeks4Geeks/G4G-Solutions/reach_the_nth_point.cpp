// https://practice.geeksforgeeks.org/problems/reach-the-nth-point/0/

#include<bits/stdc++.h>
using namespace std;
int main()
 {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long int t,i,j,n;
	cin>>t;
	long int dp[101]={0};
	dp[1]=1,dp[2]=2,dp[3]=3;
	for(i=4;i<101;i++)
	   dp[i]=dp[i-1]+dp[i-2];
	while(t--)
	{
	    cin>>n;
	    cout<<dp[n]<<"\n";
	    
	}
	return 0;
}
