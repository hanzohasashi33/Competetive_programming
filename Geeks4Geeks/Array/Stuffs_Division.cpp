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
	    int sum_need = 0;
	    int sum_arr = 0;
	    for(int i = 0;i < n;i++)
	    {
	        cin >> arr[i];
	        sum_arr += arr[i];
	        sum_need += (i+1);
	    }
	    if(sum_arr == sum_need) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}
