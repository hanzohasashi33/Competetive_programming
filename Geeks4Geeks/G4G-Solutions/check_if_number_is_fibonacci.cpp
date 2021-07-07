// https://practice.geeksforgeeks.org/problems/check-if-the-number-is-fibonacci/0


#include <iostream>
using namespace std;
#include<math.h>

bool isPerfectSquare(long long int n)
{  
   long long int x = sqrt(n);
   return x*x == n;
}

bool isFibonacci(long long int n)
{
    return isPerfectSquare(5*n*n+4)||isPerfectSquare(5*n*n-4);
}

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    if(isFibonacci(n))
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
