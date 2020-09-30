// https://practice.geeksforgeeks.org/problems/key-pair/0


#include<bits/stdc++.h>
using namespace std;
bool solve(int a[] ,int n,int sum){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        if(s.find(sum-a[i])!=s.end())
            return true;
        s.insert(a[i]);
    }
    return false;
}
int main()
 {
	int t;cin>>t;
	while(t--){
	    int n,sum;cin>>n>>sum;int a[n];
	    for(int i=0;i<n;i++)cin>>a[i];
	    cout<<(solve(a,n,sum)?"Yes\n":"No\n");
	}
	return 0;
}
