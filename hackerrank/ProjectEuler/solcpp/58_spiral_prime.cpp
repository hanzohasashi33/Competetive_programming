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
bool isprime(long long n){
		if (n<2)
				return false;
		for (long long i=2;i*i<=n;i++){
				if (n%i)
						continue;
				else
						return false;
		}
		return true;


}

void get_prime(vector<int> &prime){
		for (long long i=2;i*i<prime.size();i++)
				for (long long j=2*i;j<prime.size();j+=i)
						prime[j]=0;
}

vector <long long> get_diagonals(int n){
		vector <long long> diagonals;
		diagonals.push_back(pow(n,2));
		diagonals.push_back(pow(n,2)-n+1);
		diagonals.push_back(pow(n,2)-2*n+2);
		diagonals.push_back(pow(n,2)-3*n+3);
		return diagonals;
}

int main() {
		vector<long long> dia;
		vector<int> prime(10000007,1);
		prime[0]=prime[1]=0;
		int N=60,d=1,c=0;
		float P=100.0f;
		int curr_min=100;
		long long pre_size;
		for(N=60;N>7;N--){
				//get_prime(prime);
				pre_size=1;
				d=1;
				c=0;
				while(P>N){
						d+=2;
						dia=get_diagonals(d);
						for(int i=0;i<dia.size();i++){
								if(isprime(dia[i]))
										c++;
						}
						pre_size+=4;
						P=(float)c/pre_size*100;
						dia.clear();
				}
				if (P<curr_min)
						curr_min=P;
				P=100;
				cout<<N<<"\t"<<d<<endl;
		}
		return 0;
}
