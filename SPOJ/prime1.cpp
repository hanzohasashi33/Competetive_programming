//May the force be with you.
#include <iostream>
#include <math.h>
using namespace std;
#define ll long long




bool isprime(ll n)
{
    if(n <= 1) return false;
    if(n <= 3) return true;

    if(n%2 == 0 || n%3 == 0) return false;

    for(ll i = 5;i*i <= n;i += 6)
    {
        if(n%i == 0 || n%(i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}



int main()
{
    ll test;
    cin >> test;
    while(test--)
    {
        ll a,b;
        cin >> a >> b;
        for(ll i = a;i <= b;i++)
        {
            if(isprime(i)) cout << i << endl;
        }
    }
    return 0;
}