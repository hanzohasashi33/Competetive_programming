// https://practice.geeksforgeeks.org/problems/find-unique-element/0


#include <iostream>
#include<stdlib.h>
using namespace std;

int findUnique(int arr[], int n, int k)
{
    int hashMap[10000]={0};
    for(int j=0;j<n;j++)
    {
        hashMap[arr[j]]++;   
    }
    for(int l=0;l<10000;l++)
    {
        if(hashMap[l]==1)
        {
            return l;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<findUnique(arr,n,k)<<endl;
    }
    return 0;
}


