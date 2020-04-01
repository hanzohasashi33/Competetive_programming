#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int arr[n];
    int count[101] = {};
    for(int i = 0;i < n;i++) 
    {
        cin >> arr[i];
        count[arr[i]] += 1;
    }
    for(int i = 0;i < 100;i++)
    {
        cout << count[i] << " ";
    }
    cout << endl;
    return 0;
}
