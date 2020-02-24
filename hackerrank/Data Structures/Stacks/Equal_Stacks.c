#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>





int main()
{
    int stack1[10000],stack2[10000],stack3[10000];
    int arr1[100000],arr2[100000],arr3[10000];
    int top1 = -1,top2 = -1,top3 = -1;
    int sum1 = 0,sum2 = 0,sum3 = 0;
    int n1,n2,n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    int i = 0;
    for(;i < n1;i++)
    {
        scanf("%d",&arr1[i]);
        sum1 += arr1[i];
    }
    for(i = 0;i < n2;i++)
    {
        scanf("%d",&arr2[i]);
        sum2 += arr2[i];
    }
    for(i = 0;i < n3;i++)
    {
        scanf("%d",&arr3[i]);
        sum3 += arr3[i];
    }
    while(n1 > 0)
    {
        top1 += 1;
        stack1[top1] = arr1[n1 - 1];
        n1 --;
    }
    while(n2 > 0)
    {
        stack2[top2++] = arr2[n2 - 1];
        n2 --;
    }
    while(n3 > 0)
    {
        stack3[top3++] = arr3[n3 - 1];
        n3 --;
    }


    while(!(sum1 == sum2 && sum2 == sum3 && sum3 == sum1))
    {
        if(sum1 == 0 || sum2 == 0 || sum3 == 0)
        {
            sum1 = 0;
            break;
        }
        else if(sum1 > sum2)
        {
            int data = stack1[top1];
            sum1 -= data;
            top1 --;
        }

        else if(sum1 > sum3)
        {
            int data = stack1[top1];
            sum1 -= data;
            top1 --;
        }

        else if(sum2 > sum1)
        {
            int data = stack2[top2];
            sum2 -= data;
            top2 --;
        }

        else if(sum3 > sum1)
        {
            int data = stack3[top3];
            sum3 -= data;
            top3 --;
        }


        else if(sum2 > sum3)
        {
            int data = stack2[top2];
            sum2 -= data;
            top2 --;
        }
        else if(sum3 > sum2)
        {
            int data = stack3[top3];
            sum3 -= data;
            top3 --;
        }
    }

    printf("%d\n",sum1);
    return 0;
}
