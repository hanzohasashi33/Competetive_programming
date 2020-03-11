/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
int tree[2 * N];


void update(int arr[],int i,int x,int n)
{
  arr[i] = x;
  i = (n + i - 2)/2;
  while(i > 0)
  {
    if(arr[tree[2*i + 1]] > arr[tree[2*i + 2]])
    {
      tree[i] = tree[2*i + 2];
    }
    else 
    {
      tree[i] = tree[2*i + 1];
    }
    i = (i - 1)/2;
  }
}




void build(int arr[],int n)
{
  for(int i = 0;i < n;i++)
  {
    tree[n + i - 1] = i;
  }

  for(int i = n - 2;i >= 0;i--)
  {
    if(arr[tree[2*i + 1]]  > arr[tree[2*i + 2]])
    {
      tree[i] = tree[2*i + 2];
    }    
    else 
    {
      tree[i] = tree[2*i + 1];
    }
  }
}


void printtree(int treearr[],int n)
{
    for(int i = 0;i < n;i++)
    {
        printf("%d ",treearr[i]);
    }
    printf("\n");
}



int main()
{
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i = 0;i < n;i++)
  {
    arr[i] = 1;
  }
  build(arr,n);
  //printtree(tree, 2*n - 1);
  int test;
  scanf("%d",&test);
  while(test > 0)
  {
    int query;
    scanf("%d",&query);
    if(query == 0)
    {
      int index;
      scanf("%d",&index);
      update(arr,index-1,0,n);
      //printtree(tree,2*n - 1);
      /*
      for(int i = 0;i < n;i++)
      {
          printf("%d ",arr[i]);
      }*/
    }
    else 
    {
      int index;
      scanf("%d",&index);
      int count = 0;
      int i = 0;
      for(i = 0;i < n;i++)
      {
        if(arr[i] == 1)
        {
          count++;
          if(count == index)
          {
            printf("%d",i+1);
            break;
          }
        }
      }
      if(i == n)
      {
        printf("-1");
      }
      printf("\n");
    }
    test --;
  }
  return 0;
}
