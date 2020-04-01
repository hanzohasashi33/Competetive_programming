#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++) cin >> arr[i];
    sort(arr,arr + n);
    int min = INT_MAX;
    for(int i = 1;i < n;i++)
    {
        if(arr[i] - arr[i-1] <= min)
        {
            min = arr[i] - arr[i-1];
        }
    }

    for(int i = 1;i < n;i++)
    {
        if(arr[i] - arr[i-1] == min)
        {
            cout << arr[i-1] << " " << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
