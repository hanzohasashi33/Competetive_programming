#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    int n;
	    cin >> n;
	    int heap[n];
	    for(int i = 0;i < n;++i) cin >> heap[i];
	    int height = 0;
	    while(n > 1)
	    {
	        height += 1;
	        n = n/2;
	    }
	    cout << height << endl;
	}
	return 0;
}
