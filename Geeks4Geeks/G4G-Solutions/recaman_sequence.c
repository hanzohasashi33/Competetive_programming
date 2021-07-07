// https://practice.geeksforgeeks.org/problems/recamans-sequence/0


#include<stdio.h>
#include<stdlib.h>

void printRecman(int n)
{
    int* hashMap = (int*)calloc(100000,sizeof(int));
    int* arr = (int*)calloc(n+1,sizeof(int));
    int i;
    for(i=0;i<100000;i++)
    {
        hashMap[i]=0;
    }
    arr[0]=0;
    hashMap[0]=1;
    for(i=1;i<=n;i++)
    {
        int test = arr[i-1] - i;
        if(test>0&&hashMap[test]==0)
        {
            arr[i] = test;
            hashMap[test]++;
        }
        else
        {
            arr[i] = test + 2*i;
            hashMap[test+2*i]++;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    free(arr);
    free(hashMap);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printRecman(n);
        printf("\n");
    }
    return 0;
}
