//https://www.spoj.com/problems/ADDREV/
//May the force be with you.
#include <bits/stdc++.h>
using namespace std ;
#define ll long long


ll reversenum(ll n)
{
    ll reverse = 0;
    while(n > 0)
    {
        reverse *= 10;
        reverse = (reverse + n%10);
        n/= 10;
    }
    return reverse;
}







int main()
{
    ll test;
    cin >> test;
    while(test--)
    {
        ll a,b;
        cin >> a >> b;
        ll reverse_a = reversenum(a);
        ll reverse_b = reversenum(b);
        //cout << reverse_a << " " << reverse_b << endl;
        ll sum_ab = reverse_a + reverse_b;
        ll reverse_sum = reversenum(sum_ab);
        cout << reverse_sum << endl;
    }
    return 0;
}
