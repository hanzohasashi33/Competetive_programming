#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main()
{
    ll n;
    cin >> n;
    ll arr[n - 1];
    for(ll i = 0;i < n - 1;i++) cin >> arr[i];
    ll boss[n + 1];
    for(ll i = 0;i < n + 1;i++)
    {
        boss[i] = 0;
    }
    for(ll i = 0;i < n - 1;i++)
    {
        boss[arr[i]] += 1;
    }
    for(ll i = 1;i < n + 1;i++)
    {
        cout << boss[i] << endl;
    }
    return 0;
}
