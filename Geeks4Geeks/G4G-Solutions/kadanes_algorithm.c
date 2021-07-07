// https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0


#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int size;
        scanf("%d",&size);
        int i,gMax;
        int* arr = (int*)calloc(size,sizeof(int));
        for(i=0;i<size;i++)
        {
            scanf("%d ",&arr[i]);
        }
        gMax=arr[0];
        int* b = (int*)calloc(size,sizeof(int));
        b[0]=arr[0];
        for(i=1;i<size;i++)
        {
            if(b[i-1]+arr[i]>arr[i])
            {
                b[i]=b[i-1]+arr[i];
            }
            else
            {
                b[i]=arr[i];
            }
            if(b[i]>gMax)
            {
                gMax=b[i];
            }
        }
        printf("%d\n",gMax);
        free(arr);
        free(b);
    }
    return 0;
}
