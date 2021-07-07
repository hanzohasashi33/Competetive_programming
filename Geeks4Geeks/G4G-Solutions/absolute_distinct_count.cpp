// https://practice.geeksforgeeks.org/problems/absolute-distinct-count/0/

#include<bits/stdc++.h>
using namespace std;

int mod1(int x)
{
    if(x<0) return -x;
    else    return x;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int>s;
        int distCount = 0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(s.find(mod1(x))==s.end())
            {
                distCount++;
                s.insert(mod1(x));
            }
        }
        cout<<distCount<<"\n";
    }
    return 0;
}
