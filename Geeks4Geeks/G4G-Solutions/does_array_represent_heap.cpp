// https://practice.geeksforgeeks.org/problems/does-array-represent-heap/0/


#include <iostream>
using namespace std;

/*
bool isMaxHeap(int arr[], int n)
{
    int i=n-1;
    bool flag = true;
    while(i>=0)
    {
        if(arr[i]>arr[i/2])
        {
            return false;
        }
        i/=2;
    }
    return flag;
}
*/

int isMaxHeap(int *arr,int n){
if(n == 1)
return 1;
int l,r;
for(int i = n/2 - 1;i>=0;i--){
l = 2*i+1;
r = 2*i+2;
if(l < n && arr[l] > arr[i])
return 0;
if(r < n && arr[r] > arr[i])
return 0;
}
return 1;
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
	   cout<<isMaxHeap(arr,n)<<endl;
	   //free(arr);
	}
	return 0;
}
