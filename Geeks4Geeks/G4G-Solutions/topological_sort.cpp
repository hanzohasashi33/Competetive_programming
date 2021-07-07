// https://practice.geeksforgeeks.org/problems/topological-sort/1



using namespace std;

vector <int> topoSort(int N, vector<int> adj[]);

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
bool check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return false;
        }
    }
    return true;
}

// Driver Code
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }

        vector <int> res = topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
}// } Driver Code Ends


// The Graph structure is as folows

/*  Function which sorts the graph vertices in topological form
*   N: number of vertices
*   adj[]: input graph
*/

void explore(vector<int>adj[], int v,stack<int>&s,bool vis[])
{
    vis[v] = true;
    for(auto u : adj[v])
    {
        if(!vis[u])
        {
            explore(adj,u,s,vis);
        }
    }
    s.push(v);
}

void bfs(vector<int>adj[], int n,stack<int>&s)
{
    bool vis[n] = {false};
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            explore(adj,i,s,vis);
        }
    }
}
vector<int> topoSort(int n, vector<int> adj[]) {
    stack<int>s;
    bfs(adj,n,s);
    vector<int>v;
    while(!s.empty())
    {
        int x = s.top();
        v.push_back(x);
        s.pop();
    }
    return v;
}
