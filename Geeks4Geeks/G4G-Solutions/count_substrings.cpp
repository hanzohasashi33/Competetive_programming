// https://practice.geeksforgeeks.org/problems/count-substrings/0/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    string arr;
	    cin>>arr;
	    int c = 0;
	    for(int i=0;i<arr.size();i++)
	    {
	        if(arr[i]=='1')
	        {
	            c++;
	        }
	    }
	    cout<<(c*(c-1))/2<<endl;
	}
	return 0;
}
