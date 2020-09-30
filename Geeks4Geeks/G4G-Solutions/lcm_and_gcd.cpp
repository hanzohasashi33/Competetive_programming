// https://practice.geeksforgeeks.org/problems/lcm-and-gcd/0/


#include <iostream>
using namespace std;

long int euclidean(long int x, long int y)  //x>=y must be ensured!
{
    if(x%y==0)
    {
        return y;
    }
    if(y==0)
    {
        return x;
    }
    return euclidean(y,x%y);
}

long int max(long int x, long int y)
{
    if(x>=y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

long int min(long int x, long int y)
{
    if(x<=y)
    {
        return x;
    }
    else
    {
        return y;
    }
}


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long int x,y;
	    cin>>x>>y;
	    long int t1 = max(x,y);
	    long int t2 = min(x,y);
	    long long int prod = t1*t2;
	    long int gcd = euclidean(t1,t2);
	    cout<<prod/gcd<<" "<<gcd<<endl;
	}
	return 0;
}
