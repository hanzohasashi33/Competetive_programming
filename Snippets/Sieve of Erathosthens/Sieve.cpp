//May the force be with you.
//Sieve of Erathosthenes.
#include <bits/stdc++.h>
using namespace std;
#define ll long long



void sieveoferathosthenes(ll a,ll b)
{
    bool prime[b + 1];
    memset(prime,true,sizeof(prime));

    for(ll i = 2;i*i <= b;i++)
    {
        if(prime[i] == true)
        {
            for(ll j = i*i ;j <= b;j+=i)
            {
                prime[j] = false;
            }
        }
    }

    for(ll i = a;i <= b;i++)
    {
        if(prime[i] == true && i != 1) cout << i << endl;
    }
}





int main()
{
    ll test;
    cin >> test;
    while(test--)
    {
        ll a,b;
        cin >> a >> b;
        sieveoferathosthenes(a,b);
    }
    return 0;
}
