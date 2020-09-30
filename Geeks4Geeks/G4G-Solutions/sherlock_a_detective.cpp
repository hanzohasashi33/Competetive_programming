// https://practice.geeksforgeeks.org/problems/sherlock-a-detective/0


#include <iostream>
using namespace std;

void Elementary(int* arr, int n)
{
    int Watson[n+1]={0};
    for(int i=0;i<n;i++)
    {
        Watson[arr[i]]++;
    }
    for(int j=0;j<=n;j++)
    {
        if(!Watson[j])
        {
            cout<<j<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Elementary(arr,n);
    }
    return 0;
}
