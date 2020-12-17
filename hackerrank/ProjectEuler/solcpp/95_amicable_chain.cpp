#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <sstream>
#include <iostream>
#include <algorithm>
#define tr(container, it) \
for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
using namespace std;


void get_fact_sum(vector<long long> &fact_sum,long long Max){
		for (long long i=3;i<Max;i++){
				for (long long f=2;f*f<=i;f++){
						if((i%f)==0){
								long long d=i/f;
								fact_sum[i]+=f;
								if (d==f)
										break;
								fact_sum[i]+=d;
						}
				}
		}
}

void get_chain(vector< vector<long long> > &chain, vector<long long> fact_sum,long long Max){
		long long next,start;
		bool is_present;
		for (long long i=6;i<Max;i++){
				vector<long long> tmp;
				next=i;
				while(true){
						is_present=find(tmp.begin(),tmp.end(),next)!=tmp.end();
						if (is_present){
								chain.push_back(tmp);
								tr(tmp,i)
										fact_sum[*i]=0;
								break;
						}
						tmp.push_back(next);
						next=fact_sum[next];
						if ((next>Max)||(next<2))
								break;
						}

		}
}

int main() {
		long long Max=1000007;
		vector <long long> fact_sum(Max,1);
		vector< vector<long long> > chain(Max);
		long long max_chain=0;
		fact_sum[0]=fact_sum[1]=0;
		get_fact_sum(fact_sum,Max);
		get_chain(chain,fact_sum,Max);
		for (long long c=0;c<chain.size();c++)
				if (chain[c].size()>0){
						cout<<chain[c].size()<<"-";
						
						if (chain[c].size()>max_chain){
								max_chain=c;
						}
						for (long long i=0;i<chain[c].size();i++)
								cout<<chain[c][i]<<",";
						cout<<endl;
				}
		return 0;
}
