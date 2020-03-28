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
	    int maximum = 0;
	    for(int i = 0;i < n;i++)
	    {
	        cin >> arr[i];
	        maximum = max(maximum,arr[i]);
	    }
	    int first,second,i;
	    if(n < 2) return -1;
	    first = second = INT_MIN;
	    for(i = 0;i < n;i++)
	    {
	        if(arr[i] > first)
	        {
	            second = first;
	            first = arr[i];
	        }
	        
	        else if(arr[i] > second && arr[i] != first)
	        {
	            second = arr[i];
	        }
	    }
	    
	    if(second == INT_MIN) cout << -1 << endl;
	    else cout << second << endl;
	}
	return 0;
}
