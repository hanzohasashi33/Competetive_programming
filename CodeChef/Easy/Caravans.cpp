#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
  int test;
  cin >> test;
  while(test > 0)
  {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++) cin >> arr[i];
    int count = 0;
    for(int i = 1;i < n;i++)
    {
      if(arr[i] > arr[i-1])
      {
        count++;
        arr[i] = arr[i-1];
      }
    }
    cout << n - count << endl;
    test --;
  }
}
