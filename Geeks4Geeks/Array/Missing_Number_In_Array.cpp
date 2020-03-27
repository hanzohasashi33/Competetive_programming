#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    int test;
    cin >> test;
    while(test > 0)
    {
        int n;
        cin >> n;
        int arr[n-1];
        int arrsum = 0;
        for(int i = 0;i < n-1;i++)
        {
            cin >> arr[i];
            arrsum += arr[i];
        }
        int sum = (n * (n + 1))/2;
        cout << sum - arrsum << endl;
        test--;
    }
    return 0;
}
