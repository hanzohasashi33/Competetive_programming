#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int test;
  cin >> test;
  while(test--)
  {
    int n;
    cin >> n;
    int reverse = 0;
    while(n > 0)
    {
      reverse *= 10;
      reverse = (reverse + n%10);
      n = n/10;
    }
    cout << reverse << endl;
  }
  return 0;
}
