// https://practice.geeksforgeeks.org/problems/print-adjacency-list/0

#include<iostream>
#include<vector>
using namespace std;

void insert_into_list(vector<int> arr[], int index, int value, int n)
{
    if(index==value || index>n)    return;
    else
    {
        arr[index].push_back(value);
        arr[value].push_back(index);
    }
}
void printAdjList(vector<int> arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<i;
        for (auto j: arr[i])
        {
            cout<<"-> "<<j;
        }
        cout<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,e;
        cin>>n>>e;
        vector<int>arr[n];
        while(e--)
        {
            int index,val;
            cin>>index>>val;
            insert_into_list(arr,index,val,n);
        }
        printAdjList(arr,n);
    }
    return 0;
}
