// https://practice.geeksforgeeks.org/problems/anshumans-favourite-number/0


#include <iostream>
using namespace std;

bool check_mod(int n)
{
    if(n>=0)
    {
        return n%5==0;
    }
    else
    {
        return (-n)%5==0;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(check_mod(n))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
