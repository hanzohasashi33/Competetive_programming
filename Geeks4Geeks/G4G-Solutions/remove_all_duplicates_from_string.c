// https://practice.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string/0



#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void removeDuplicates(char* str, int n)
{
    char* hashMap = (char*)calloc(256,sizeof(char));
    int i;
    for(i=0;i<256;i++)
    {
        hashMap[i]=0;
    }
    for(i=0;i<n;i++)
    {
        hashMap[str[i]]++;
    }
    for(i=0;i<n;i++)
    {   
        if(hashMap[str[i]]>0)
        {
            printf("%c",str[i]);
            hashMap[str[i]]=0;
        }
    }
    free(hashMap);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[100];
        scanf("%s",str);
        removeDuplicates(str,strlen(str));
        printf("\n");
    }
    return 0;
}
