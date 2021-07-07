// https://practice.geeksforgeeks.org/problems/equilibrium-point/0


#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        int result = -1;
        scanf("%d",&n);
        int i,j;
        int* arr = (int*)calloc(n,sizeof(int));
        for(i=0;i<n;i++)
        {
            scanf("%d ",&arr[i]);
        }
        if(n==1)
        {
            result = 1;
        }
        else
        {
            for(i=1;i<n;i++)
            {
                arr[i]=arr[i]+arr[i-1];
            }
            for(j=1;j<n;j++)
            {
                if((arr[j]+arr[j-1])==arr[n-1])
                {
                    result = j+1;
                }
            }
        }
        printf("%d\n",result);
        free(arr);
    }
    return 0;
}
