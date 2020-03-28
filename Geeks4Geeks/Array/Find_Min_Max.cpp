#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int test;
	cin >> test;
	while(test--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0;i < n;i++) cin >> arr[i];
	    int mini = INT_MAX,maxi = INT_MIN;
	    for(int i = 0;i < n;i++)
	    {
	        maxi = max(maxi,arr[i]);
	        mini = min(mini,arr[i]);
	    }
	    cout << mini << " " << maxi << endl;
	}
	return 0;
}
