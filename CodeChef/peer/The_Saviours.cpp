#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define ll long long
using namespace std;




int main()
{
  ll test;
  cin >> test;
  while(test--)
  {
    string str;
    cin >> str;
    stack <char> a;
    ll n = str.length();
    for(ll i = n - 1;i >= 0;i--)
    {
      if(str[i] == '*')
      {
        if(!a.empty())
        {
          a.pop();
        }
        if(!a.empty())
        {
          a.pop();
        }
      }
      else 
      {
        a.push(str[i]);
      }
    }
    if(!a.empty())
    {
      cout << "NO" << endl;
    }
    else 
    {
      cout << "YES" << endl;
    }
  }
  return 0;
}
