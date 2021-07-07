// https://practice.geeksforgeeks.org/problems/count-odd-factors/0


#include <iostream>
using namespace std;
#include<math.h>

int count_odd_factors(int n)
{
    return (int)sqrt(n);
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<count_odd_factors(n)<<endl;
	}
	return 0;
}
