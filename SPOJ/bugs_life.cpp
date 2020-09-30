#include<bits/stdc++.h>
using namespace std;


void bugslife_spoj()
{
	int t; cin >> t;
	for(int tc=1 ; tc<=t ;tc++){
		int n,e; cin >> n>>e;
		rep(i ,0, n+1)
		{
			vis[i]=0;
			g[i].clear();
		}
		rep(i ,	0, e){
			int u,v; cin >> u >> v;
			g[u].pb(v); g[v].pb(u);		
		}	
		int f=1;
		rep(i ,1 ,n+1){
			if(!vis[i]){
				bool res = dfs_bpg(i , 0);
				if(!res){
					f=0;break;
				}
			}
		}
		cout << "Scenario #" << tc << ":" << endl;
		if(!f){
			cout << "Suspicious bugs found!" << endl;
		}
		else cout << "No suspicious bugs found!" << endl;
	}
}

//driver code 
int32_t main(){
  bugslife_spoj();
}
