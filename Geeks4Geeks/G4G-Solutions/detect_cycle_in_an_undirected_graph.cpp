// https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/*  Function to check if the given graph contains cycle
*   V: number of vertices
*   adj[]: representation of graph
*/

int k = 0; 

void explore(int v, vector<int> adj[],  int vis[], int post[])
{
    vis[v] = true;
    vector<int> x = adj[v];
    for(int i=0;i<x.size();i++)
    {
        if(vis[x[i]]==false)
        {
            explore(x[i],adj,vis,post);
        }
    }
    post[v]=k++;
}

void dfs(vector<int>adj[], int n, int vis[], int post[])
{
    for(int i=0;i<n;i++)
    {
        if(vis[i]==false)
        {
            explore(i,adj,vis,post);
        }
    }
}

bool isCyclic(int V, vector<int> adj[])
{
    int n = V;
    int vis[n] = {0};
    int post[n] = {0};
    dfs(adj,n,vis,post);
    for(int i=0;i<n;i++)
    {
        vector<int>x = adj[i];
        for(int j=0;j<x.size();j++)
        {
            if(post[i] <= post[x[j]])
            {
                k = 0;
                return true;
            }
        }
    }
    k = 0;
    return false;
}

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int v, e;
	    cin >> v >> e;
	    
	    vector<int> adj[v];
	    
	    for(int i =0;i<e;i++){
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	    }
	    
	    cout << isCyclic(v, adj) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
