#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;



void stockspan(int price[],int n,int span[])
{
  stack <int> s;
  s.push(0);
  span[0] = 1;

  for(int i = 1;i < n;i++)
  {
    while(!s.empty() && price[s.top()] < price[i])
    {
      s.pop();
    }

    span[i] = (s.empty()) ? (i + 1) : (i - s.top());

    s.push(i);
  }
}



void printarr(int arr[],int n)
{
  for(int i = 0;i < n;i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}





int main()
{
  int price[] = {100,80,60,70,65,75,85};
  int n = sizeof(price)/sizeof(price[0]);
  int span[n];
  stockspan(price, n, span);
  printarr(span,n);
  return 0;
}
