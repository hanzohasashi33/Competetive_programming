#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//NOTE : This code is possible only when the charecters of the pattern are different.
//For the above case this is an optimized solution.
//eg : This will not work for the case when text is AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA and pattern is AAAA


void string_matching(char *txt,char *ptn)
{
    int i,j;

    int l1 = strlen(txt);
    int l2 = strlen(ptn);

    while(i <= l1 - l2)
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
            i = i + l2;
        }
        else if(j == 0)
        {
            i = i + 1;
        }
        else 
        {
            i = i + j;
        }
    }
}





int main()
{
    int n = 100000;
    char txt[n];
    char ptn[n - 1];

    //scanning the two string spaces
    printf("Enter txt : ");
    scanf("%s",txt);
    printf("Enter pattern : ");
    scanf("%s",ptn);

    string_matching(txt,ptn);
    return 0;

}
