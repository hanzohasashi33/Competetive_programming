// https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1


#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/* Function to do DFS of graph
*  g[]: array of vectors to represent graph
*  vis[]: array to keep track of visited vertex
*/


void dfs_util(int x, vector<int> g[], bool vis[])
{
    if(vis[x])
    {
        return;
    }
    else
    {
        cout<<x<<" ";
        vis[x]=true;
        for(auto i: g[x])
        {
            if(!vis[i])
            {
                dfs_util(i,g,vis);
            }
        }
    }
}

void dfs(int s, vector<int> g[], bool vis[])
{
   // for(int i=0;i<1000;i++) vis[i]=false;
    dfs_util(s,g,vis);
}

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {

        int N, E;
        cin>>N>>E;
        
        vector<int> g[N];
        bool vis[N];
        
        memset(vis, false, sizeof(vis));
        
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        dfs(0,g,vis);
        
        cout<<endl;

    }
}  // } Driver Code Ends
