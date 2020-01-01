#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n = 1000000;
    char num1[n];
    char num2[n];
    char temp1[n];
    char temp2[n];
    char product[2 * n];      //maximum length of product can only be n1 + n2 ,in this case 2n


    //Scanning two numbers
    printf("Enter number 1 : ");
    scanf("%s",temp1);
    printf("Enter number 2 : ");
    scanf("%s",temp2);

    int l1 = strlen(temp1);
    int l2 = strlen(temp2);

    int i = 0;
    int j = 0;
    int k = 0;

    for(i = l1 - 1,j = 0;i >=0;i--,j++)
    {
        num1[j] = temp1[i] - '0';
    }

    for(i = l2 -1,j = 0;i >= 0;i--,j++)
    {
        num2[j] = temp1[i] - '0';
    }

    for(i = 0;i < l2;i++)
    {
        for(j = 0;j < l1;j++)
        {
            product[i + j] += num2[j] * num1[i];
        }
    }

    int temp = 0;
    for(i = 0;i < l1 + l2;i++)
    {
        temp = product[i]/10;
        product[i] = product[i] % 10;
        product[i + 1] = product[i + 1] + temp;
    }

    for(i = l1 + l2;i >= 0;i--)
    {
        if(product[i] > 0)
        {
            break;
        }
    }


    printf("Product : ");
    for(;i >= 0;i--)
    {
        printf("%d",product[i]);
    }

    return 0;   
}
