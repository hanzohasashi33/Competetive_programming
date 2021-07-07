// https://practice.geeksforgeeks.org/problems/woodall-number/0/


#include <iostream>
#include<math.h>
using namespace std;

bool isWoodall(int n)
{
    if(n%2==0)
    {
        return false;
    }
    int x = 0;
    while(x*pow(2,x)-1<=n)
    {
        
        x++;
        if(x*pow(2,x)-1==n)
        {
            return true;
        }
    }
    
    return false;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<isWoodall(n)<<endl;
	}
	return 0;
}
