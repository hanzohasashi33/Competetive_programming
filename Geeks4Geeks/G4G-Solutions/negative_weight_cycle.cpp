// https://practice.geeksforgeeks.org/problems/negative-weight-cycle/0

#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000
class Edge
{
    public:
        int u;
        int v;
        int w;
};

bool isNegative(Edge edgeList[], int n, int m)
{
    int dist[1001];
    for(int i=0;i<n;i++)
    {
        dist[i]=INF;
    }
    dist[0] = 0;
    for(int ctr = 0; ctr < n-1; ctr++)
    {
        for(int i=0;i<m;i++)
        {
            if(dist[edgeList[i].v] > dist[edgeList[i].u] + edgeList[i].w)
            {
                dist[edgeList[i].v] = dist[edgeList[i].u] + edgeList[i].w;
            }
        }
    }
    for(int j = 0; j < m; j++)
    {
        if(dist[edgeList[j].v] > dist[edgeList[j].u] + edgeList[j].w)
            {
                return true;
            }
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        Edge arr[1000];
        for(int k = 0; k < m; k++)
        {
            int u1,v1,w1;
            cin>>u1>>v1>>w1;
            Edge temp;
            temp.u = u1;
            temp.v = v1;
            temp.w = w1;
            arr[k] = temp;
        }
        cout<<isNegative(arr,n,m)<<endl;
    }
    return 0;
}

