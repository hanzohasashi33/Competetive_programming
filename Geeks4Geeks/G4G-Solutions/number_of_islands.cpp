// https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1



int findIslands(vector<int> A[], int N, int M);

int main() {

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> A[N];
        for (int i = 0; i < N; i++) {
            vector<int> temp(M);
            A[i] = temp;
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        cout << findIslands(A, N, M) << endl;
    }
    return 0;
}// } Driver Code Ends


/*you are required to complete this method*/

/*  Function to find number of islands in the given graph
*   A[]: input array
*   N, M: Row and column of given matrix
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
void dfs(vector<int> A[],vector<vector<int>> &vis,int i,int j,int N,int M)
{
    vis[i][j]=1;
    for(int k=0;k<8;k++)
    {
        int u=i+dx[k];int v=j+dy[k];
        if(issafe(u,v,N,M)&&vis[u][v]==0&&A[u][v])
        {
            dfs(A,vis,u,v,N,M);
        }
    }
}
int findIslands(vector<int> A[], int N, int M)
{
    vector<vector<int>> vis(N,vector<int> (M,0));
    int ans=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            if(!vis[i][j]&&A[i][j])
            {
                ans++;
                dfs(A,vis,i,j,N,M);
            }
        }
    }
    return ans;
}
