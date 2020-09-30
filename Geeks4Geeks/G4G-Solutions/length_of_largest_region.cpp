// https://practice.geeksforgeeks.org/problems/length-of-largest-region-of-1s/0


using namespace std;

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

void dfs(int grid[][100], int vis[][100], int i, int j, int n, int m, int &count)
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

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int grid[100][100];
        int vis[100][100];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>grid[i][j];
                vis[i][j] = 0;
            }
        }
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
        cout<<maxAns<<"\n";
    }
    return 0;
}
