// https://practice.geeksforgeeks.org/problems/first-come-first-serve/0


#include<stdio.h>
#include<stdlib.h>

int findFirst(int* arr, int n, int k)
{
    int* hashMap =  (int*)calloc(100000,sizeof(int));
    int i;
    for(i=0;i<n;i++)
    {
        hashMap[arr[i]]++;
    }
    for(i=0;i<n;i++)
    {
        if(hashMap[arr[i]]==k)
        {
            free(hashMap);
            return arr[i];
        }
    }
    free(hashMap);
    return -1;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int* arr = (int*)calloc(n,sizeof(int));
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d ",&arr[i]);
        }
        printf("%d\n",findFirst(arr,n,k));
        free(arr);
    }
    return 0;
}
