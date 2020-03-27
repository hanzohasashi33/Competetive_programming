#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;



void findmajority(int arr[],int n)
{
    unordered map<int,int> m;
    for(int i = 0;i < n;i++)
    {
        m[arr[i]] += 1;
    }
    int count = 0;
    for(auto i : m)
    {
        if(i.second > n/2)
        {
            count = 1;
            cout << i.first << endl;
            return;
        }
    }
    
    if(count == 0) cout << -1 << endl;
}





int main() {
	//code
	int test;
	cin >> test;
	while(test > 0)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0;i < n;i++)
	        cin >> arr[i];
	    findmajority(arr,n);
	    test--;
	}
	return 0;
}
