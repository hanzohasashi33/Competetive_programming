#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
#define tr(container, it) \
for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
using namespace std;


int main() {
		int max_num=100;
		int coin[max_num];
		for (int i=0;i<max_num;i++)
				coin[i]=i+1;
		long long MOD=1000000000+7;
		vector <long long>dp(max_num,0);
		dp[0]=1;
		for(int c=0;c<max_num;c++){
				for(long long v=coin[c];v<max_num;v++)
						dp[v]=(dp[v]+dp[v-coin[c]])%MOD;
		}
		int t=1;
		cin>>t;
		while(t--){
				long long N=6;
				cin>>N;
				cout<<dp[N]-1<<endl;
		}
		return 0;
}
