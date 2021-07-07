//https://practice.geeksforgeeks.org/problems/element-appearing-once/0


#include<iostream>

using namespace std;

int main() {
	int t; cin>> t;
	while(t--)
	{
	    int n; cin >>n; int a[n];
	    for(int i = 0; i < n; i++)cin >>a[i];
	    
	    int val = 0;
	    for(int i = 0; i < n; i++)
	        val = (val ^ a[i]);
	    
	    cout << val << endl;
	}
	return 0;
}
