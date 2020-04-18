//https://www.spoj.com/problems/FCTRL/
#include <bits/stdc++.h>
using namespace std ;
#define ll long long


ll zeroes(ll x)
{
    ll mul = 5;
    ll zero = 0;
    while(x/mul > 0)
    {
        zero += x/mul;
        mul *= 5;
    }
    return zero;
}



int main()
{
    ll test;
    cin >> test;
    while(test--)
    {
        ll x;
        cin >> x;
        cout << zeroes(x) << endl;
    }
    return 0;
}
