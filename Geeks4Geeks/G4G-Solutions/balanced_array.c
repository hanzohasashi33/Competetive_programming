// https://practice.geeksforgeeks.org/problems/balanced-array/0


int mod(int a, int b)
{
    if(a>=b)
    {
        return a-b;
    }
    else
    {
        return b-a;
    }
}

int findVal(int* arr, int n)
{
    int l=0;
    int r=n-1;
    int m=n/2;
    int sum1=0;
    int sum2=0;
    while(l<m&&r>=m)
    {
        sum1+=arr[l];
        sum2+=arr[r];
        l++;
        r--;
    }
    return mod(sum1,sum2);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i;
        int* arr = (int*)calloc(n,sizeof(int));
        for(i=0;i<n;i++)
        {
            scanf("%d ",&arr[i]);
        }
        printf("%d\n",findVal(arr,n));
        free(arr);
    }
    return 0;
}

