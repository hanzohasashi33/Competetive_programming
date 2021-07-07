// https://practice.geeksforgeeks.org/problems/nodes-at-even-distance/0

#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int>adj[], int n, int dist[], int s)
{
    for(int i=0;i<n;i++)
    {
        dist[i] = INT_MAX;
    }
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(auto v : adj[u])
        {
            if(dist[v]==INT_MAX)
            {
                q.push(v);
                dist[v] = dist[u] + 1;
            }
        }
    }
}

int findNodes(vector<int>adj[], int n, int s)
{
    int dist[n];
    bfs(adj,n,dist,s);
    int odd=0;
    int even=0;
    for(int i=0;i<n;i++)
    {
        if(dist[i]%2==0)    even++;
        else  odd++;
    }
    return (even*(even-1))/2 + (odd*(odd-1))/2;
} 

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>adj[n];
        int src;
        for(int i=0;i<n-1;i++)
        {
            int from,to;
            cin>>from>>to;
            adj[from-1].push_back(to-1);
            adj[to-1].push_back(from-1);
            if(i==0)    src = from-1;
        }
        cout<<findNodes(adj,n,src)<<"\n";
    }
    return 0;
}
