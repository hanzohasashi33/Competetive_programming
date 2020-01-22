#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *txt = (char *)malloc(sizeof(char) * 1000000);
    char *ptn = (char *)malloc(sizeof(char) * 1000000);

    scanf("%s",txt);
    scanf("%s",ptn);

    int i,j;
    int n = strlen(txt);
    int m = strlen(ptn);

    for(i = 0;i < n;i++)
    {
        txt[i] -= '0';
    }
    for(j = 0;j < m;j++)
    {
        ptn[j] -= '0';
    }

    int ptnhash = ptn[0];
    int txthash = txt[0];
    int x = 2;

    for(i = 1;i < m;i++)
    {
        x = (x * 2)%101;
        ptnhash = (ptnhash * 2 + ptn[i])%101;
        txthash = (txthash * 2 + txt[i])%101;
    }
    //printf("%d\n",ptnhash);
    //printf("%d\n",txthash);

    if(ptnhash == txthash)
    {
        int i = 0;
        for(j = 0;j < m;j++)
        {
            if(ptn[j] != txt[i + j])
            {
                break;
            }
        }
        if(j == m)
        {
            printf("There is a match at index 0.\n");
        }
    }


    for(i = 1;i < n - m + 1;i++)
    {
        txthash = (txthash * 2 + txt[i + m - 1] - (txt[i - 1] * x))%101;
        if(txthash == ptnhash)
        {
            for(j = 0;j < m;j++)
            {
                if(txt[i + j] != ptn[j])
                {
                    break;
                }
            }
            if(j == m)
            {
                printf("There is a match at index %d.\n",i);
            }
        }
    }
    return 0;
}