// https://practice.geeksforgeeks.org/problems/maximum-product-of-two-numbers/0





#include <iostream>
using namespace std;

int min(int a, int b)
{
    if(a<=b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int max(int a, int b)
{
    if(a<=b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

long long int maxProd(int* arr, int n)
{
    int max1 = max(arr[0],arr[1]);
    int max2 = min(arr[0],arr[1]);
    for(int i=2;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2)
        {
            max2 = arr[i];
        }
    }
    return max1*max2;
}

int main() {
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
        cout<<maxProd(arr,n)<<endl;
    }
	return 0;
}
