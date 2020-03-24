//https://practice.geeksforgeeks.org/problems/kth-smallest-element/0
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
	    int k;
	    cin >> k;
	    sort(arr,arr+n);
	    cout << arr[k-1] << endl;
	}
	return 0;
}
