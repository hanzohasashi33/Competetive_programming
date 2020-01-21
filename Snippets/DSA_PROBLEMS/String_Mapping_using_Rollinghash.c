#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//program to check whether two given strings are equal
//basically a strcmp function to check whether string and pattern match
int stringmatch(char * txt,char * ptn,int n,int m,int i)
{
    int j = 0;
    for(j = 0;j < m;j++)
    {
        if(txt[i + j] != ptn[j])
        {
            break;
        }
    }
    if(j == m)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}





int main()
{
    //input the pattern and text.
    char * txt = (char *)malloc(sizeof(char) * 1000000);
    scanf("%s",txt);
    char * ptn = (char *)malloc(sizeof(char) * 1000000);
    scanf("%s",ptn);

    //convert the given binary strings to integer.
    int n = strlen(txt);
    int m = strlen(ptn);

    int i,j;
    for(i = 0;i < n;i++)
    {
        txt[i] = txt[i] - '0';
    }
    for(i = 0;i < m;i++)
    {
        ptn[i] = ptn[i] - '0';
    }

    //check hashes of the first iteration - if they match print it and continue to further iterations
    int x = 2;
    int text_number = txt[0];
    int pattern_number = ptn[0];
    for(i = 1;i < m;i++)
    {
        x = x * 2;
        pattern_number = pattern_number * 2 + ptn[i];
        text_number = text_number * 2 + txt[i];
    }
    //printf("%d\n",pattern_number);
    //printf("%d",text_number);
    if(pattern_number == text_number)
    {
        if(stringmatch(txt,ptn,n,m,i) == 1)
        {
            printf("There is a match at index 0.\n");
        }
    }


    //check hash values of subsequent substrings by deleting the hashvalue of excluded element and adding new element.
    for(i = 1;i < n - m + 1;i++)
    {
        text_number = text_number * 2 + txt[i + m -1] - (txt[i - 1] * x);
        //printf("%d\n",pattern_number);
        //printf("%d",text_number);

        if(pattern_number == text_number)
        {
            if((stringmatch(txt,ptn,n,m,i)) == 1)
            {
                printf("There is a match at index %d.\n",i);
            }
        }
    }
    return 0;
}
