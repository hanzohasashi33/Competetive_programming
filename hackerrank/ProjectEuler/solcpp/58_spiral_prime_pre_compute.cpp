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


int main() {
		int ans[]={238733,74373,26241,12201,6523,3593,1883,981,713,525,463,363,309,259,227,197,109,99,89,71,53,49,49,47,45,43,39,35,33,33,31,31,31,29,27,23,13,13,13,13,11,11,11,11,11,9,9,9,5,5,5,5,5};
		int n;
		cin>>n;
		cout<<ans[n-8];
		return 0;
}
