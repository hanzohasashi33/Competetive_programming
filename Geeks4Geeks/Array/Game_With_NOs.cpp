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
	    int arr[n],arrxor[n];
	    for(int i = 0;i < n;i++) cin >> arr[i];
	    int i;
	    for(i = 0;i < n - 1;i++)
	    {
	        arrxor[i] = arr[i] ^ arr[i+1];
	    }
	    arrxor[i] = arr[i];
	    for(i = 0;i < n;i++) cout << arrxor[i] << " ";
	    cout << endl;
	}
	return 0;
}
