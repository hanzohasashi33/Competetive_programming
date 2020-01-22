#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define d 256
#define prime 101


void search(char * txt,char *ptn,int n,int m)
{
    int i,j;
    int ptnhash = 0;
    int txthash = 0;
    int h = 1;

    for(i = 0;i < m - 1;i++)
    {
        h = (h * d)%prime;
    }

    for(i = 0;i < m;i++)
    {
        txthash = (txthash * d + txt[i])%prime;
        ptnhash = (ptnhash * d + ptn[i])%prime;
    }
    printf("%d\n",txthash);
    printf("%d\n",ptnhash);
    for (i = 0; i < n - m + 1; i++)  
    { 
        if ( ptnhash == txthash )  
        {  
            for (j = 0; j < m; j++)  
            {  
                if (txt[i+j] != ptn[j])  
                    break;  
            }  
            if (j == m)  
            {
                printf("There is a match at %d.\n",i);
            }
        }
        if(i < n - m)
        {
            txthash = (d * (txthash - txt[i] * h) + txt[i + m ])%prime;
            if(txthash < 0)
            {
                txthash += prime;
            }
        }  
    }
}
   













int main()
{
    char *txt = (char *)malloc(sizeof(char) * 1000000);
    char *ptn = (char *)malloc(sizeof(char) * 1000000);

    scanf("%s",txt);
    scanf("%s",ptn);

    int i,j;
    int n = strlen(txt);
    int m = strlen(ptn);

    /*
    for(i = 0;i < n;i++)
    {
        txt[i] -= '0';
    }
    for(j = 0;j < m;j++)
    {
        ptn[j] -= '0';
    }
    */
    search(txt,ptn,n,m);
    return 0;
}