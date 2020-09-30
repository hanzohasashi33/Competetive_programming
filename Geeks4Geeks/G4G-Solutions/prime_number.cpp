// https://practice.geeksforgeeks.org/problems/prime-number/0


#include <iostream>
using namespace std;


bool isPrime(long int n)
{
    if(n==1)
    {
        return true;
    }
    for(int x = 2;x*x<=n;x++)
    {
        if(n%x==0)
        {
            return false;
        }
    }
    return true;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long int n;
	    cin>>n;
	    if(isPrime(n))
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
