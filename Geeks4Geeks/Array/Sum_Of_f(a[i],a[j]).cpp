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
	    for(int i = 0;i < n;i++)
	    {
	        cin >> arr[i];
	    }
	    int i,j,sum = 0;
	    for(i = 0;i < n;i++)
	    {
	        for(j = i + 1;j < n;j++)
	        {
	            if(abs(arr[i]-arr[j]) > 1)
	            {
	                sum += arr[j] - arr[i];
	            }
	            else 
	            {
	                sum += 0;
	            }
	        }
	    }
	    cout << sum << endl;
	}
	return 0;
}
