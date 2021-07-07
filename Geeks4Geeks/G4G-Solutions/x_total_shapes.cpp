// https://practice.geeksforgeeks.org/problems/x-total-shapes/0/

#include<bits/stdc++.h>
using namespace std;

bool isSafe(char grid[100][100], bool vis[100][100], int n, int m, int i, int j)
{
    if(i<0||j<0||i>=n||j>=m||grid[i][j]=='O')  return false;
    else    return true;
}

void dfs(char grid[100][100], bool vis[100][100], int n, int m, int i, int j)
{
    vis[i][j] = true;
    if(isSafe(grid,vis,n,m,i-1,j) && !vis[i-1][j])  dfs(grid,vis,n,m,i-1,j);
    if(isSafe(grid,vis,n,m,i,j+1) && !vis[i][j+1])  dfs(grid,vis,n,m,i,j+1);
    if(isSafe(grid,vis,n,m,i+1,j) && !vis[i+1][j])  dfs(grid,vis,n,m,i+1,j);
    if(isSafe(grid,vis,n,m,i,j-1) && !vis[i][j-1])  dfs(grid,vis,n,m,i,j-1);
}

int connected(char grid[100][100], bool vis[100][100], int n, int m)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='X' && vis[i][j]==false)
            {
                count++;
                dfs(grid,vis,n,m,i,j);
            }
        }
    }
    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char grid[100][100];
        bool vis[100][100];
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            for(int j=0;j<m;j++)
            {
                grid[i][j] = s[j];
                vis[i][j]=false;
            }
        }
        cout<<connected(grid,vis,n,m)<<"\n";
    }
    return 0;
}
