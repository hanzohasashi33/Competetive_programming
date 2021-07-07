// https://practice.geeksforgeeks.org/problems/searching-a-number/0


#include<stdlib.h>
int lSearch(int* arr, int n, int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i+1;
        }
    }
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
        int i;
        int* arr = (int*)calloc(n,sizeof(int));
        for(i=0;i<n;i++)
        {
            scanf("%d ",&arr[i]);
        }
        printf("%d\n",lSearch(arr,n,k));
        free(arr);
    }
}
