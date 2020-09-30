// https://practice.geeksforgeeks.org/problems/triangular-number/0


#include <iostream>
using namespace std;

bool isTriangular(int n)
{
    int x = 1;
    while(x*x+x<=2*n)
    {
        if(x*x+x==2*n)
        {
            return true;
        }
        x++;
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<isTriangular(n)<<endl;
    }
    return 0;
}
