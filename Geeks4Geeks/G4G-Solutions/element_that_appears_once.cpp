// https://practice.geeksforgeeks.org/problems/element-that-appears-once-where-every-element-occurs-twice/0


#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int unique = 0;
	    for(int j=0;j<n;j++)
	    {
	        unique = unique^arr[j];
	    }
	    cout<<unique<<endl;
	}
	return 0;
}
