// https://practice.geeksforgeeks.org/problems/ones-complement/0


#include <iostream>
#include<math.h>
using namespace std;

int complement(int n)
{
    return (int)(pow(2,(int)log2(n)+1)-n-1);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<complement(n)<<endl;
    }
    return 0;
}
