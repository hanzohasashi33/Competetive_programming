#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int test;
	cin >> test;
	while(test > 0)
	{
	    int counter[1000000];
	    memset(counter,0,1000000);
	    int n;
	    int maxcount = 0;
	    int element = 0;
	    cin >> n;
	    int arr[n];
	    for(int i = 0;i < n;i++)
	    {
	        cin >> arr[i];
	        counter[arr[i]] += 1;
	        if(counter[arr[i]] > maxcount)
	        {
	            maxcount = counter[arr[i]];
	            element = arr[i];
	        }
	    }
	    
	    if(maxcount > n/2) cout << element << endl;
	    else cout << "-1" << endl;
	    test --;
	}
	return 0;
}
