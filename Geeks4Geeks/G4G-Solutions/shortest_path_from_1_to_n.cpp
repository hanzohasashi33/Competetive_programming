// https://practice.geeksforgeeks.org/problems/shortest-path-from-1-to-n/0


#include <iostream>
#include<math.h>
using namespace std;

int res(int n)
{

    if (n<2) return 0;
    if (n==2) return 1;
    return (n%3)+1+res(n/3);
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    cout<<res(n)<<endl;
	}

	return 0;
}
