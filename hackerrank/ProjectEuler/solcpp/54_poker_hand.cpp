#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
#include <sstream>
#define tr(container, it) \
for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
using namespace std;

vector<string> split(string s){
		vector<string> v;
		stringstream ss(s);
		string buf;
		while (ss >> buf)
				v.push_back(buf);
		return v;
}

int main() {
		vector<string> card;
		string s;
		int t;
		cin>>t;
		t=1;
		getline(cin,s);
		while(t--){
				getline(cin,s);
				card=split(s);
		}
		for (int i=0;i < card.size();i++)
				cout<<card[i]<<endl;
		return 0;
}
