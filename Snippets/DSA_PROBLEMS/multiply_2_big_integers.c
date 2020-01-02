#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int n = 1000000;
    char num1[n],num2[n],temp1[n],temp2[n];
    char product[2 * n];
    int i = 0;


    //scanning numbers as strings
    printf("Enter number 1 : ");
    scanf("%s",temp1);
    printf("Enter number 2 : ");
    scanf("%s",temp2);


    int l1 = strlen(temp1);
    int l2 = strlen(temp2);

    int j;

    //loop to reverse the numbers and convert char to int
    for(int i = l1 - 1,j = 0;i >= 0;i--,j++)
    {
        num1[j] = temp1[i] - '0';
    }
    for(int i = l2 - 1,j = 0;i >= 0;i--,j++)
    {
        num2[j] = temp2[i] - '0';
    }



    //loop to multiply two numbers
    for(int i = 0;i < l2;i++)
    {
        for(j = 0;j < l1;j++)
        {
            product[i + j] += num2[i] * num1[j];
            //printf("%d %d %d\n",product[i + j],i,j);
        }
    }


    //loop to take the carry over to next digit
    int temp = 0;
    for(int i = 0;i < l1 + l2;i++)
    {
      temp = product[i]/10;
      product[i] = product[i] % 10;
      product[i + 1] += temp;
    }


    //loop to leave out garbage value
    for(i = l1 + l2;i >= 0;i--)
    {
      if (product[i] > 0)
      {
        break;
      }
    }
  

    //loop to print the product
    printf("Product : ");
    for(;i >= 0;i--)
    {
      printf("%d",product[i]);
    }
    return 0;
}
