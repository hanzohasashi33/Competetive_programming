// https://practice.geeksforgeeks.org/problems/find-out-the-team/0/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)    cout<<"1"<<"\n";
        else        cout<<(n>>1)<<"\n";
    }
    return 0;
}
