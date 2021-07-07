// https://practice.geeksforgeeks.org/problems/repeated-character/0/


#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int findIndex(char c)
{
    return c-'a';
}
char findChar(int x)
{
    return x + 'a';
}

void findRep(char* str, int n)
{
    
    int* hashMap = (int*)calloc(26,sizeof(int));
    //memset(hashMap,0,26*sizeof(int));
    for(int k=0;k<26;k++)
    {
        hashMap[k]=0;
    }
    int i;
    for(i=0;i<n;i++)
    {
        hashMap[findIndex(str[i])]++;
    }

    for(int j=0;j<n;j++)
    {
        if(hashMap[findIndex(str[j])]>1)
        {
            printf("%c\n",str[j]);
            free(hashMap);
            return;
        }
        
    }
    printf("-1\n");
    free(hashMap);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[40000];
        scanf("%s",str);
        findRep(str,strlen(str));
    }
    return 0;
}
