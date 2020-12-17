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

void get_valid(vector<int> &valid_char){
		for (int i=48;i<58;i++)
				valid_char[i]=1;
		for (int i=97;i<123;i++)
				valid_char[i]=1;
		for (int i=65;i<91;i++)
				valid_char[i]=1;
		valid_char[40]=1;
		valid_char[41]=1;
		valid_char[33]=1;
		valid_char[32]=1;
		valid_char[39]=1;
		valid_char[58]=1;
		valid_char[59]=1;
		valid_char[44]=1;
		valid_char[45]=1;
		valid_char[46]=1;
		valid_char[63]=1;
}

bool valid_pos(vector<int> &valid_char,vector<int> &input_num,int pos,int ch){
		bool valid=true;
		for(int i=0;i<input_num.size();i++)
				if(i%3==pos){
						int r=input_num[i]^ch;
						if(r<valid_char.size())
								if(!valid_char[r]){
										valid=false;
										return false;
								}
								else{}
						else{
								valid=false;
								return false;
						}
				}
		return valid;
}


int main() {
		int n=82;
		vector<int> num;
		vector<int> valid_char(123,0);
		get_valid(valid_char);
		int t;
		char a,b,c;
		cin>>n;
		while(n--){
				scanf("%d",&t);
				num.push_back(t);
		}
		bool end=true;
		end=false;
		for (int first=97;first<123;first++){
				if(!end){
						if (!valid_pos(valid_char,num,0,first))
								continue;
						a=first;
						for (int sec=97;sec<123;sec++){
								if(!end){
										if (!valid_pos(valid_char,num,1,sec))
												continue;
										b=sec;
										for (int thr=97;thr<123;thr++){
												if(!end){
														if (!valid_pos(valid_char,num,2,thr))
																continue;
														else{
																c=thr;
																end=true;
																break;
														}
												}else
														break;
										}
								}
								else
										break;
						}
				}
				else
						break;
		}
		cout<<a<<b<<c;
		return 0;
}
