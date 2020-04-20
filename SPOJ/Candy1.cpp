#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main()
{
    while(true)
    {
        ll n;
        cin >> n;
        if(n == -1) break;
        else 
        {
            ll arr[n];
            double sum_arr = 0;
            for(ll i = 0;i < n;i++)
            {
                cin >> arr[i];
                sum_arr += arr[i];
            }
            double avg = sum_arr/n;
            ll moves = 0;
            if(int(avg) != avg) cout << "-1" << endl;
            else 
            {
                for(ll i = 0;i < n;i++)
                {
                    if(avg - arr[i] > 0) moves += avg - arr[i];
                }
                cout << moves << endl;
            }
        }
    }
    return 0;
}
