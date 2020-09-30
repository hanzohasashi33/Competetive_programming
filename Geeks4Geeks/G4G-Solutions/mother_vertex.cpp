// https://practice.geeksforgeeks.org/problems/mother-vertex/1

//Initial Template for C++


#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends





/*
 * Function to find if there is a mother vertex in the given graph 
 * V: number of vertices in the graph
 * g[]: graph representation
 */


void dfs(vector<int>adj[], int s, bool vis[])
{
    vis[s]=true;
    for(auto u : adj[s])
    {
        if(!vis[u]) 
        {
            dfs(adj,u,vis);
        }
    }
}
int findMother(int n, vector<int> g[]) 
{ 
    int mother = 0;
    bool vis[n];
    for(int i=0;i<n;i++)    vis[i]=false;
    dfs(g,0,vis);
    for(int i=0;i<n;i++)
    {
        if(!vis[i]) 
        {
            dfs(g,i,vis);
            mother = i;
        }
    }
    
    bool vis2[n] = {false};
    dfs(g,mother,vis2);
    for(int i=0;i<n;i++)
    {
        if(!vis2[i])    return -1;
    }
    return mother;
} 


// { Driver Code Starts.

int main() 
{ 
    int T;
    cin>>T;
    while(T--){
        int num, edges;
        cin>>num>>edges;
        
        vector<int> adj[num];
        
        int u, v;
        while(edges--){
            cin>>u>>v;
            adj[u].push_back(v);
        }
        
        cout<<findMother(num, adj)<<endl;
    }

	return 0;
}   // } Driver Code Ends
