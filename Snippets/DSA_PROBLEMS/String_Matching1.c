#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void string_matching(char *txt,char *ptn)
{
    int i,j;
    int l1 = strlen(txt);
    int l2 = strlen(ptn);

    for(i = 0;i < l1 - l2 + 1;i++)
    {
        for(j = 0;j < l2;j++)
        {
            if(txt[i + j] != ptn[j])
            {
                break;
            }
        }
        if(j == l2)
        {
            printf("There is a match at index %d.\n",i);
        }
    }
}





int main()
{
    int n = 100000;
    char txt[n];
    char ptn[n-1];              //length of pattern must be less than length of txt
    

    //scanning two string spaces
    printf("Enter txt : ");
    scanf("%s",txt);
    printf("Enter pattern : ");
    scanf("%s",ptn);

    string_matching(txt,ptn);
    return 0;
}
