#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int test;
    scanf("%d",&test);
    while(test > 0)
    {
        char *num1 = (char *)malloc(sizeof(char) * 1000000000);
        char *num2 = (char *)malloc(sizeof(char) * 1000000000);
        scanf("%s",num1);
        scanf("%s",num2);
        for(int i = 0;i < strlen(num1);i++)
        {
            num1[i] -= '0';
        }
        for(int i = 0;i < strlen(num2);i++)
        {
            num2[i] -= '0';
        }

        int n = strlen(num1);
        int m = strlen(num2);

        int k = 0;
        int i = n - 1;
        int j = m - 1;
        char *sum = (char *)malloc(sizeof(char) * 1000000000);
        for(;i >= 0 && j >= 0;i--,j--,k++)
        {
            sum[k] = (num1[i] + num2[j])%10;
        }

        if (n > m)
        {
        //number 1 greater than number 2
            while(i >= 0)
            {
                sum[k++] = (num1[i])%10;
                i--;
            }
        }

        else if(m > n)
        {
            while(j >= 0)
            {
                //number2 is greater than number1
                sum[k++] = (num2[j])%10;
                j--;
            }
        }

        for(k--;k >= 0;k--)
        {
            printf("%d",sum[k]);
        }
        printf("\n");
        test --;
    }
    return 0;
}

