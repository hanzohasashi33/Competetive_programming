#include <stdio.h>
#include <stdlib.h>

int isPrime(int n)  
{  
    // Corner cases  
    if (n <= 1)  return 0;  
    if (n <= 3)  return 1;  
    
    // This is checked so that we can skip   
    // middle five numbers in below loop  
    if (n%2 == 0 || n%3 == 0) return 0;  
    
    for (int i=5; i*i<=n; i=i+6)  
        if (n%i == 0 || n%(i+2) == 0)  
           return 0;  
    
    return 1;  
} 


int nextPrime(int N) 
{ 
  
    // Base case 
    if (N <= 1) 
        return 2; 
  
    int prime = N; 
    int found = 0; 
  
    // Loop continuously until isPrime returns 
    // true for a number greater than n 
    while (!found) { 
        prime++; 
  
        if (isPrime(prime)) 
            found = 1; 
    } 
  
    return prime; 
} 
  

int main()
{
  int test;
  scanf("%d",&test);
  while(test > 0)
  {
    int field1,field2;
    scanf("%d %d",&field1,&field2);
    int sum = field1 + field2;
    printf("%d",nextPrime(sum) - sum);
    printf("\n");
    test --;
  }
  return 0;
}
