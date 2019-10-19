#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int summation(int a[] , int n){
    if ( n == 0 )
        return a[0];
    else
        return a[n] + summation(a, n-1);
}

int main(void)
{
    int n;
    scanf("%d",&n);
    
    int arr[n];
    
    for(int i = 0;i < n;i++)
        scanf("%d",&arr[i]);
    
    int sum = summation(arr,n);
    
    printf("%d",sum);
    return 0;
}
