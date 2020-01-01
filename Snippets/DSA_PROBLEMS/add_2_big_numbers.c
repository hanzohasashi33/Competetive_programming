#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n = 1000000;
    char num1[n];
    char num2[n];
    char sum[n + 1];
    //char temp1[n];
    //char temp2[n];
    int carry = 0;
    int l1,l2;

    printf("Enter Number 1 : ");
    scanf("%s",num1);

    printf("Enter number 2 : ");
    scanf("%s",num2);



    //Converting the string into integers
    for(l1 = 0;num1[l1] != '\0';l1++)
    {
        num1[l1] = num1[l1] - '0';
    }

    for(l2 = 0;num2[l2] != '\0';l2++)
    {
        num2[l2] = num2[l2] - '0';
    }

    int k = 0;
    int i = l1 - 1;
    int j = l2 - 1;


    //adding both numbers with respective digits
    for(;i >= 0 && j >= 0;i--,j--,k++)
    {
        sum[k] = (num1[i] + num2[j] + carry)%10;
        carry =  (num1[i] + num2[j] + carry)/10;
    }

    if (l1 > l2)
    {
        //number 1 greater than number 2
        while(i >= 0)
        {
            sum[k++] = (num1[i] + carry)%10;
            carry = (num1[i] + carry)/10;
            i--;
        }
    }

    else if(l2 > l1)
    {
        while(j >= 0)
        {
            //number2 is greater than number1
            sum[k++] = (num2[j] + carry)%10;
            carry = (num2[j] + carry)/10;
            j--;
        }
    }

    else 
    {
        if (carry > 0)
        {
            //updating the first digit
            sum[k++] = carry;
        }
    }

    printf("SUM : ");
    for(k--;k >= 0;k--)
    {
        printf("%d",sum[k]);
    }

    return 0;
}
