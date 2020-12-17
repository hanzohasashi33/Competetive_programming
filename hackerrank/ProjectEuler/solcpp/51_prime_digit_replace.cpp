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

void get_primes(vector <int> &prime){
		for (long long i=2;i<prime.size();i++)
				for(long long j=2*i;j<prime.size();j+=i)
						prime[j]=0;
}
bool is_prime_replace(long long n,int K){
		vector<int> digit(10,0);
		while(n){
				digit[n%10]++;
				n=n/10;
		}

		tr(digit,it)
				if(*it>=K)
						return true;
		return false;
}
long long vector_to_num(vector<int> &digit){
		long long n=0;
		tr(digit,i){
				n*=10;
				n+=*i;
		}
		return n;
}

bool set_mask(int N, int K,int L,long long n,vector<int> &prime){
		vector<bool> ar(N-K,true);
		vector<int> digit;
		while(n){
				digit.push_back(n%10);
				n/=10;

		}
		reverse(digit.begin(),digit.end());
		//tr(digit,i)
				//cout<<*i;
		//cout<<"\n number\n";
		while(K--)
				ar.push_back(false);
		sort(ar.begin(),ar.end());
		vector<int> new_num(N,0);
		vector<long long> prime_num;
		long long t;
		int count=0;
		do{
				prime_num.clear();
				for(int d=0;d<10;d++){
						for(int i=0;i<N;i++){
								if ((ar[0]==0) && (d==0))
										break;
								if (ar[i])
										new_num[i]=digit[i];
								else
										new_num[i]=d;
						}
						t=vector_to_num(new_num);
						//cout<<t<<endl;
						if (prime[t])
								prime_num.push_back(t);
				}
				if (prime_num.size()>=L){
						sort(prime_num.begin(),prime_num.end());
						for(int i=0;i<L;i++){
								cout<<prime_num[i]<<" ";
						}
						return true;
				}
		}
		while(next_permutation(ar.begin(),ar.end()));
		return false;
}


int main() {
		long long N=5;
		//cin>>N;
		int K=2;
		int L=7;
		vector <int> prime(pow(10,N),1);
		prime[0]=0;
		prime[1]=0;
		get_primes(prime);
		int n=0;
		for(long long i=pow(10,N-1);i<pow(10,N);i++)
				if (set_mask(N,K,L,i,prime))
						break;
		return 0;
}
