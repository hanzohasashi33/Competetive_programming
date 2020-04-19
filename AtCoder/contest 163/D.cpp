#include <bits/stdc++.h>
using namespace std;
#define ll long long
constexpr int MOD = 1e9 + 7;


ll progsum(ll a,ll d,ll n)
{
    return n * (2 * a + (n - 1) * d)/2;
}


int main()
{
    ll n,k;
    cin >> n >> k;
    ll r = 0;
    ll i = 0;
    for(i = k;i <= n + 1;i++)
    {
        ll series_min = progsum(0,1,i);
        ll series_max = progsum(n,-1,i);
        r += series_max - series_min + 1;
        r = r%MOD;
    }
    cout << r << endl;
}
