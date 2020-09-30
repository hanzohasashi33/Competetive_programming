// https://practice.geeksforgeeks.org/problems/length-of-largest-region-of-1s-1587115620/1


#include <bits/stdc++.h>
using namespace std;

#define SIZE 100


 // } Driver Code Ends








/*  Function to find the area of 1s
*   SIZE: declared globally for matrix definition
*   n, m: row and column of matrix
*   A[][]: 2D matrix from input
*/

vector<int> dx={1,-1,0,0,1,1,-1,-1};
vector<int> dy={0,0,1,-1,1,-1,1,-1};

bool issafe(int i,int j,int n,int m)
{
    if(i<0||j<0||i>=n||j>=m)
    {
        return false;
    }
    return true;
}

void dfs(int grid[SIZE][SIZE], int vis[SIZE][SIZE], int i, int j, int n, int m, int &count)
{
    count++;
    vis[i][j] = 1;
    for(int k=0;k<8;k++)
    {
        if(issafe(i+dx[k],j+dy[k],n,m)&&!vis[i+dx[k]][j+dy[k]]&&grid[i+dx[k]][j+dy[k]]==1)
        {
            dfs(grid,vis,i+dx[k],j+dy[k],n,m,count);
        }
    }
}
int findMaxArea(int n, int m, int grid[SIZE][SIZE] )
{
    int vis[SIZE][SIZE]={0};
    int maxAns = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]&&!vis[i][j]){
                int ans1 = 0;
                dfs(grid,vis,i,j,n,m,ans1);
                if(ans1>maxAns) maxAns = ans1;
                }
            }
        }
        return maxAns;
}



// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int g[SIZE][SIZE];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> g[i][j];

        cout << findMaxArea(n, m, g) << endl;
    }

    return 0;
}  // } Driver Code Ends
