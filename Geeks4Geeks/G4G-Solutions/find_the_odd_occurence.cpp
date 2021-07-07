// https://practice.geeksforgeeks.org/problems/find-the-odd-occurence/0

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int res = 0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            res^=x;
        }
        cout<<res<<"\n";
    }
    return 0;
}
