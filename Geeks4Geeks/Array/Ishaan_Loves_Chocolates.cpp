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
	    int mini = INT_MAX;
	    for(int i = 0;i < n;i++)
	    {
	        if(mini >= arr[i])
	        {
	            mini = arr[i];
	        }
	    }
	    cout << mini << endl;
	}
	return 0;
}
