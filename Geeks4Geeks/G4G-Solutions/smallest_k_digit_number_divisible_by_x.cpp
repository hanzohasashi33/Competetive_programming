// https://practice.geeksforgeeks.org/problems/smallest-k-digit-number-divisible-by-x/0/?ref=self


#include <iostream>
#include<math.h>
using namespace std;

long long int small(int k, int x)
{
    long long int base = pow(10,k-1);
    if(base%x==0)
    {
        return base;
    }
    else
    {
        return base + x - (base%x);
    }
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,k;
	    cin>>x>>k;
	    cout<<small(k,x)<<endl;
	}
	return 0;
}
