#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
  long long test;
  cin >> test;
  while(test--)
  {
    long long n;
    cin >> n;
    long long zeroes = 0;
    for(int i = 5;n/i >= 1;i = i * 5)
    {
      zeroes += n/i;
    }
    cout << zeroes << endl;
  }
  return 0;
}
