// https://practice.geeksforgeeks.org/problems/find-position-of-set-bit/0




#include <iostream>
#include<math.h>
using namespace std;

int set_bit(long int n)
{
    if((n&(n-1)))
    {
        return -1;
    }
    else
    {
        return (int)log2(n) + 1;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        cout<<set_bit(n)<<endl;
    }
    return 0;
}
