// https://practice.geeksforgeeks.org/problems/power-of-numbers/0


#include<stdlib.h>

long long int reversed_number(long long int n)
{
    int* arr = (int*)calloc(1000,sizeof(int));
    int k=0;
    while(n>0)
    {
        arr[k++]=n%10;
        n/=10;
    }
    long long int sum=0;
    int i;
    long long int mul=1;
    for(i=k-1;i>=0;i--)
    {
        sum+=(mul)*(arr[i]);
        mul*=10;
    }
    free(arr);
    return sum;
}



long long int power(long long int x, long long  int n)
{
    long long int b = 1000000007;
    if(n==0)
    {
        return 1;
    }
    long long int temp = power(x,n/2);
    if(n%2==0)
     return ((temp%b)*(temp%b))%b; 
    else
        return (x*((temp*temp)%b))%b; 
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        printf("%lld\n",power(n,reversed_number(n)));
    }
    return 0;
}
