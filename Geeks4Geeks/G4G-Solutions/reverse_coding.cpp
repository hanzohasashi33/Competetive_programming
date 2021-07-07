// https://practice.geeksforgeeks.org/problems/reverse-coding/0



#include <iostream>
using namespace std;

bool isValid(long int n, long int k)
{
    return ((n)*(n+1))/2 == k;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long int n,k;
	    cin>>n>>k;
	    cout<<isValid(n,k)<<endl;
	}
	return 0;
}
