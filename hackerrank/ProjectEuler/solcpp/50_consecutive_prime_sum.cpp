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
void get_prime(vector<int> &prime){
		for (long long i=2;i*i<prime.size();i++)
				for (long long j=2*i;j<prime.size();j+=i)
						prime[j]=0;
}

bool isprime(long long n,vector<int> &prime){
		if (n<2)
				return false;
		if (n>1000005){
				for (long long i=2;i*i<=n;i++){
						if (n%i)
								continue;
						else
								return false;
				}
				return true;
		}
		else
				return prime[n];
}

int main() {
		long long M=1000000+7;
		vector<int> prime(M,1);
		prime[0]=prime[1]=0;
		get_prime(prime);
		bool prime_val;
		int t=1;
		cin>>t;
		while(t--){
				long long N=100,len=1,max_len=0,max_val=0;
				long long start=2,stop=3,s=0;
				cin>>N;
				while(!isprime(start,prime))
						start++;
				while(!isprime(stop,prime))
						stop++;
				s=stop+start;
				while(s<=N){
						len++;
						if (isprime(s,prime)){
								if (len>max_len){
										max_len=len;
										max_val=s;
								}
						}
						stop++;
						while(!isprime(stop,prime))
								stop++;
						s+=stop;
						if (s>N){
								start++;
								while(!isprime(start,prime))
										start++;
								stop=start+1;
								while(!isprime(stop,prime))
										stop++;
								s=stop+start;
								len=1;
						}
				}
				cout<<max_val<<" "<<max_len<<endl;
		}
		return 0;
}
