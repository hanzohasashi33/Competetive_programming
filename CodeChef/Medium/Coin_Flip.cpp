#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
  int test;
  cin >> test;
  while(test--)
  {
    int g;
    cin >> g;
    for(int i = 0;i < g;i++)
    {
      int ini,n,q;
      cin >> ini >> n >> q;
      if(n%2 == 0 || ini == q) cout << n/2 << endl;
      else cout << (n/2 + 1) << endl;
    }
  }
  return 0;
}
