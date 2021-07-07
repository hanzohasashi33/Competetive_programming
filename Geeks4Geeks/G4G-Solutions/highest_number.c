// https://practice.geeksforgeeks.org/problems/find-the-highest-number/0


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int* arr = (int*)calloc(n,sizeof(int));
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d ",&arr[i]);
        }
        int max=arr[0];
        for(i=1;i<n;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
        printf("%d\n",max);
        free(arr);
    }
    return 0;
}
