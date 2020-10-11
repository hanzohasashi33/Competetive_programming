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

bool is_cyclic(vector<int> &num){
		int n=num.size();
		vector<int> start(n),end(n),ans(n);
		for (int i=0;i<n;i++){
				start[i]=num[i]/100;
				end[i]=num[i]%100;
		}
		int c=0,k=0;
		for (int i=0;i<n;i++){
				ans[k]=num[c];
				for(int j=0;j<n;j++){
						if ((end[c]==start[j])&&(start[j]>0)&&(j!=c)){
								start[j]=0;
								end[c]=0;
								k++;
								c=j;
								break;
						}
				}
		}
		if (k!=n)
				return false;
		else
				return true;
				
}
bool is_next_cycle(int a,int b){
		if(((a/100)==(b%100))||((b/100)==(a%100)))
				return true;
		return false;
}

int polygon_num(int p, int n){
		switch(p){
				case 3:
						return(n*(n+1)/2);
				case 4:
						return(n*n);
				case 5:
						return(n*(3*n-1)/2);
				case 6:
						return(n*(2*n-1));
				case 7:
						return(n*(5*n-3)/2);
				case 8:
						return(n*(3*n-2));
		}
}

void permut(vector<int> &p){
		sort(p.begin(),p.end());
		do{

				tr(p,i)
						cout<<*i<<",";
				cout<<endl;
		}while(next_permutation(p.begin(),p.end()));

}
int main() {
		int a=1;
		int m;
		int b=0;
		cin>>m;
		vector<int> p(m);
		for(int i=0;i<3;i++){
				int t;
				scanf("%d",&t);
				p[i]=t;
		}
		set<int> ans;
		sort(p.begin(),p.end());
		do{
				vector< vector<int> > poly(3);
				for(int i=0;i<3;i++){
						int v=0,n=1;
						v=polygon_num(p[i],n);
						while(v<10000){
								poly[i].push_back(v);
								n++;
								v=polygon_num(p[i],n);
						}
				}

				for(int i=0;i<poly[0].size();i++){
						if ((poly[0][i]<1000)||(poly[0][i]>9999))
								continue;
						for(int j=0;j<poly[1].size();j++){
								if ((poly[1][j]<1000)||(poly[1][j]>9999))
										continue;
								if(is_next_cycle(poly[0][i],poly[1][j])){
										for(int k=0;k<poly[2].size();k++){
												if ((poly[2][k]<1000)||(poly[2][k]>9999))
														continue;
												vector<int> tmp;
												tmp.push_back(poly[0][i]);
												tmp.push_back(poly[2][k]);
												tmp.push_back(poly[1][j]);
												if((is_cyclic(tmp) && (i!=j)&&(j!=k)&&(i!=k))){
																ans.insert(poly[0][i]+poly[1][j]+poly[2][k]);
																b++;
												}
										}
								}
						}
				}
				
				tr(p,i)
						cout<<*i<<",";
				for(set<int>::iterator i =ans.begin();i!=ans.end();i++)
						cout<<*i<<endl;
		}while(next_permutation(p.begin(),p.end()));

		/*for (int i=3;i<9;i++){
				for(int n=1;n<10;n++)
						cout<<polygon_num(i,n)<<",";
				cout<<endl;
		}*/
		return 0;
}
