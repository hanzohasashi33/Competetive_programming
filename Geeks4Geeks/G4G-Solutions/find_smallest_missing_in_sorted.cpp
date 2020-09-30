// https://practice.geeksforgeeks.org/problems/find-smallest-missing-in-sorted/0

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        int hashMap[m];
        for(int j=0;j<m;j++)    hashMap[j] = 0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            hashMap[arr[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            if(!hashMap[i])
            {
                cout<<i<<"\n";
                break;
            }
        }
    }
    return 0;
}
