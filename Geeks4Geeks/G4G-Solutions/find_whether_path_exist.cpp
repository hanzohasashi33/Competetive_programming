// https://practice.geeksforgeeks.org/problems/find-whether-path-exist/0/

#include<bits/stdc++.h>
using namespace std;


int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};

bool isValid(int i, int j, int n, int m, int grid[][100], int vis[][100])
{
    if(i<0||j<0||i>=n||j>=m||!grid[i][j]||vis[i][j]==1) return false;
    return true;
}

void bfs(int grid[][100], int vis[][100], int dist[][100], int n, int m, int srcX, int srcY, int destX, int destY)
{
    vis[srcX][srcY] = 1;
    dist[srcX][srcY] = 0;
    queue<pair<int,int>>q;
    q.push({srcX,srcY});
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        int d = dist[x][y];
        q.pop();
        for(int i=0;i<4;i++)
        {
            int newX = x + dx[i];
            int newY = y + dy[i];
            if(isValid(newX,newY,n,m,grid,vis))
            {
                vis[newX][newY] = 1;
                dist[newX][newY] = d+1;
                q.push({newX,newY});
            }
        }
    }
    if(dist[destX][destY] == INT_MAX) 
    {
        cout<<"0"<<"\n";
    }
    else
    {
        cout<<"1"<<"\n";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m = n;
        int grid[100][100];
        int vis[100][100];
        int dist[100][100];
        int srcX,srcY,destX,destY;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>grid[i][j];
                vis[i][j]=0;
                dist[i][j] = INT_MAX;
                if(grid[i][j]==1)  srcX = i,srcY = j;
                if(grid[i][j]==2)   destX = i, destY = j;
            }
        }
        bfs(grid,vis,dist,n,m,srcX,srcY,destX,destY);
    }
    return 0;
}


