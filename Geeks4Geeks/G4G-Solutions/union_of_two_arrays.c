// https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0


#include <stdio.h>
#include<stdlib.h>
#define MAX 100000

int findUnion(int* arr1, int size1, int* arr2, int size2)
{
    int* hashMap = (int*)calloc(MAX,sizeof(int));
    int ctr;
    int res = 0;
    for(ctr=0;ctr<MAX;ctr++)
    {
        hashMap[ctr]=0;
    }
    int i,j;
    for(i=0;i<size1;i++)
    {
        hashMap[arr1[i]]++;
    }
    for(j=0;j<size2;j++)
    {
        hashMap[arr2[j]]++;
    }
    for(ctr=0;ctr<MAX;ctr++)
    {
        if(hashMap[ctr]>0)
        {
            res++;
        }
    }
    free(hashMap);
    return res;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int size1,size2,i,j;
        scanf("%d %d",&size1,&size2);
        int* arr1 = (int*)calloc(size1,sizeof(int));
        int* arr2 = (int*)calloc(size2,sizeof(int));
        for(i=0;i<size1;i++)
        {
            scanf("%d ",&arr1[i]);
        }
        for(j=0;j<size2;j++)
        {
            scanf("%d ",&arr2[j]);
        }
        printf("%d\n",findUnion(arr1,size1,arr2,size2));
        free(arr1);
        free(arr2);
    }
    return 0;
}
