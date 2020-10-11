#include<iostream>
#include<cstdio>
using namespace std;

int cycle_len(int dnr){
		int seen_rem[dnr];
		for (int i=0;i<dnr;i++)
				seen_rem[i]=0;
		int len=1;
		int nr=1;
		while(nr){
				int rem=(nr*10)%dnr;
				if(seen_rem[rem])
						return len-seen_rem[rem];
				seen_rem[rem]=len;
				len++;
				nr=rem;
		}
		return 0;
}


int main(){
		int T,N;
		scanf("%d",&T);
		int N_MAX=10000;
		int longest_cycle[N_MAX];
		int max_len=0;
		int max_num=0;
		for (int i=3;i<=N_MAX;i++){
				int curr=cycle_len(i);
				if (curr>max_len){
						max_len=curr;
						max_num=i;
				}
				longest_cycle[i]=max_num;
		}
		while(T--){
				scanf("%d",&N);
				printf("%d\n",longest_cycle[N-1]);
		}
				//cout<<i<<" "<<cycle_len(i)<<endl;
		return 0;
}
