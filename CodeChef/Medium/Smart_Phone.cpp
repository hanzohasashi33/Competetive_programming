#include <bits/stdc++.h>
using namespace std;

int main() 
{
  long long n;
  cin >> n;
  long long arr[n];
  long long i,j = n;
  for(i = 0;i < n;i++) cin >> arr[i];
  sort(arr,arr + n);
  long long sumarr[n];
  long long maxi = INT_MIN;
  for(int i = 0;i < n;i++,j--)
  {
    sumarr[i] = arr[i] * j;
    maxi = max(maxi,sumarr[i]);
  }
  cout << maxi << endl;
  return 0;
}
