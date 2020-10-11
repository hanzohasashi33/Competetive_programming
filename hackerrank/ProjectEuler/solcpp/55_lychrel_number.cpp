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


bool ispal(int n){
		bool pal=true;
		vector <int>digit;
		while((n/10)>0){
				digit.push_back(n%10);
				n=(int)n/10;
		}
		digit.push_back(n%10);
		for ( int i=0;i<digit.size();i++){
				if (digit[i]!=digit[digit.size()-i-1]){
						pal=false;
						break;
				}
		}
		return pal;
}

long long next_pal(long long n){
		long long rev=0;
		long long tmp=n;
		while(n/10){
				rev*=10;
				rev+=n%10;
				n=n/10;
		}
		rev*=10;
		rev+=n%10;
		return rev+tmp;
}
int main() {
		int n=130;
		cin>>n;
		//vector<int> pal_num(n+1,0);
		map<long long,int> pal_num;
		int max_pal=0;
		bool point=false;
		int max_pal_count=0;
		for(int i=1;i<=n;i++){
				if (i==89)
						point=!point;
				long long p=i;
				int iter=1;
				while(!ispal(p) and iter<60){
						iter++;
						p=next_pal(p);
				}
			
				if (pal_num.find(p)==pal_num.end())
						pal_num[p]=0;
				pal_num[p]++;
				if (pal_num[p]>max_pal_count){
						max_pal_count=pal_num[p];
						max_pal=p;
						}
		}
		cout<<max_pal<<" "<<max_pal_count;
		return 0;
}
