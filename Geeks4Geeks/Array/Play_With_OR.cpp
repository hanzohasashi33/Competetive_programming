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
	    int arr[n];
	    for(int i = 0;i < n;i++) cin >> arr[i];
	    int arror[n];
	    int i;
	    for(i = 0;i < n - 1;i++)
	    {
	        arror[i] = arr[i] | arr[i+1];
	    }
	    arror[i] = arr[n-1];
	    for(i = 0;i < n;i++) cout << arror[i] << " ";
	    cout << endl;
	}
	return 0;
}
