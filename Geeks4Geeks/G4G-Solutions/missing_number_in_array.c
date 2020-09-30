// https://practice.geeksforgeeks.org/problems/missing-number-in-array/0


#include<stdlib.h>

long long int sum_of_array(long int* arr, long int size)
{
    long int i=0;
    long long int sum = 0;
    for(i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

long long int main_number(long int n)
{
    return ((n)*(n+1))/2;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n;
        scanf("%ld",&n);
        long int* arr = (long int*)calloc(n,sizeof(long int));
        long int i;
        for(i=0;i<n-1;i++)
        {
            scanf("%ld ",&arr[i]);
        }
        arr[n-1]=0;
        printf("%ld\n",main_number(n)-sum_of_array(arr,n));
        free(arr);
    }
    return 0;
}
