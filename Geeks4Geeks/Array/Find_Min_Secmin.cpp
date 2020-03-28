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
	    int first = INT_MAX,second =INT_MAX,i = 0;
	    for(i = 0;i < n;i++)
	    {
	        if(arr[i] < first)
	        {
	            second = first;
	            first = arr[i];
	        }
	        
	        if(arr[i] < second && arr[i] != first)
	        {
	            second = arr[i];
	        }
	    }
	    
	    if(second == INT_MAX || first == second) cout << "-1" << endl;
	    else cout << first << " " << second << endl;
	}
	return 0;
}
