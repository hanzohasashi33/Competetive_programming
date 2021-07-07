// https://practice.geeksforgeeks.org/problems/count-the-paths/0

#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int>adj[], int vis[], int n, int s, int d)
{
    int count = 0;
    queue<int>q;
    vis[s]=1;
    q.push(s);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        if(u==d)
        {
            count++;
            continue;
        }
        vis[u] = 1;
        for(int v : adj[u])
        {
            if(!vis[v])
            {
                q.push(v);
            }
        }
        
    }
    cout<<count<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>adj[n];
        int vis[n] =  {0};
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
        }
        int s,d;
        cin>>s>>d;
        bfs(adj,vis,n,s,d);
    }
    return 0;
}
