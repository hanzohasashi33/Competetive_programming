// Write your code here
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[101],b[101];
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&b[i]);
    }
    int i = 0;
    int j = 0;
    int count = 0;
    while(i < n)
    {
        if(a[i] == b[i])
        {
            count ++;
            i = i + 1;
        }
        else 
        {
            for(j = i;j < n-1;j++)
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            count ++;
        }
    }
    printf("%d",count);
    return 0;
}
