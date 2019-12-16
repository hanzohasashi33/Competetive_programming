# include<stdio.h>
# include<stdlib.h>

void printarr(int arr[],int n)
{
    for(int k = 0;k < n;k++)
    {
        printf("%d ",arr[k]);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i = 0;
    for(i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    scanf("%d",&x);
    int new_arr[n + 1];
    if(x >= arr[n - 1])
    {
        for(int j = 0;j < n;j++)
        {
            new_arr[j] = arr[j];
        }
        new_arr[n] = x;
    }

    else if(x <= arr[0])
    {
        new_arr[0] = x;
        for(int j = 0;j < n;j++)
        {
            new_arr[j + 1] = arr[j];
        }
    }

    else 
    {
        int j = 0;
        for(j = 0;j < n;j++)
        {
            if(x <= arr[j])
            {
                break;
            }
        }
        new_arr[j] = x;
        for(int k = 0;k < j;k++)
        {
            new_arr[k] = arr[k];
        }
        for(int k = j + 1;k < n + 1;k++)
        {
            new_arr[k] = arr[k - 1];
        }
    }

    printarr(new_arr,n + 1);
    return 0;
}