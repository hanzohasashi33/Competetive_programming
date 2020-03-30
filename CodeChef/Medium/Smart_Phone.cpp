#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
  long long n;
  cin >> n;
  long long arr[n];
  long long i = 0,j = 0;
  for(i = 0;i < n;i++) cin >> arr[i];
  long long sum = 0,sum_max = 0;
  for(i = 0;i < n;i++)
  {
    sum = 0;
    for(j = 0;j < n;j++)
    {
      if(arr[j] >= arr[i])
      {
        sum += arr[i];
      }
    }
    sum_max = max(sum,sum_max);
  }
  cout << sum_max << endl;
  return 0;
}
