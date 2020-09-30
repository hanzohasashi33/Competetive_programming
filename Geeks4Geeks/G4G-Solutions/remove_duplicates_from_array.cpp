// https://practice.geeksforgeeks.org/problems/remove-duplicates-from-unsorted-array/0/

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
        int hashMap[101];
        for(int i=0;i<101;i++)
        {
            hashMap[i] = 0;
        }
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(hashMap[x]==0)
            {
                v.push_back(x);
                hashMap[x]++;
            }
        }
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
