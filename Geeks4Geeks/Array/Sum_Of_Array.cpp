#include <bits/stdc++.h>
#include <iostream>
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
	    int sum = 0;
	    for(int i = 0;i < n;i++)
	    {
	        cin >> arr[i];
	        sum += arr[i];
	    }
	    cout << sum << endl;
	}
	return 0;
}
