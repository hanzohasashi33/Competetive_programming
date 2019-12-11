#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
int min(int arr[],int n)
{
  int mini = arr[0];
  for(int i = 1;i < n;i++)
  {
    if(arr[i] <= mini)
    {
      mini = arr[i];
    }
  }
  return mini;
}


int main()
{
  int test;
  scanf("%d",&test);
  while(test > 0)
  {
    int n;
    scanf("%d",&n);
    int i = 0;
    int k = 0;
    int new_food[n];
    int food[n];
    for(i = 0;i < n;i++)
    {
      scanf("%d",&food[i]);
    }
    for(i = 0;i < n;i++)
    {
      if(food[i] % min(food,n) == 0)
      {
        new_food[k++] = food[i] / min(food,n);
      }
    }
    if (k == n)
    {
      for(int i = 0;i < n;i++)
      {
        printf("%d ",new_food[i]);
      }
    }
    else 
    {
      for(i = 0;i < n;i++)
      {
        printf("%d ",food[i]);
      }
    }
    printf("\n");
    test --;
  }
  return 0;
}*/


int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  
// Function to find gcd of array of 
// numbers 
int findGCD(int arr[], int n) 
{ 
    int result = arr[0]; 
    for (int i = 1; i < n; i++) 
    { 
        result = gcd(arr[i], result); 
  
        if(result == 1) 
        { 
           return 1; 
        } 
    } 
    return result; 
} 


int main()
{
  int test;
  scanf("%d",&test);
  while(test > 0)
  {
    int n;
    int k = 0;
    scanf("%d",&n);
    int food[n];
    int new_food[n];
    for(int i = 0;i < n;i++)
    {
      scanf("%d",&food[i]);
    }
    //printf("%d",findGCD(food, n));
    for(int j = 0;j < n;j++)
    {
      new_food[k++] = food[j]/findGCD(food, n);
    }
    for(int i = 0;i < n;i++)
    {
      printf("%d ",new_food[i]);
    }
    printf("\n");
    test --;
  }
  return 0;
}
