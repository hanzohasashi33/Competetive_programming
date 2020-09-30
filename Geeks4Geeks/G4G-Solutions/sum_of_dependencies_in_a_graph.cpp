// https://practice.geeksforgeeks.org/problems/sum-of-dependencies-in-a-graph/0

#include <bits/stdc++.h>
using namespace std;

int sumOfDep(vector<int> adj[],int n){
 int sum=0;
 for(int i=0;i<n;i++){
     int m=adj[i].size();
     sum+=m;
 }
    return sum;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,e;
	    cin>>n>>e;
	    vector<int>adj[n];
	    
	    for(int i=0;i<e;i++)
	    {
	      int u,v;cin>>u>>v;
	      adj[u].push_back(v);
	    }
	    cout<<sumOfDep(adj,n)<<endl;
	    
	}
	return 0;
}
