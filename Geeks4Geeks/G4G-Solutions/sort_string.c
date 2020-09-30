// https://practice.geeksforgeeks.org/problems/sort-string/0


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

void sortString(char* str, int n)
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
    for(i=0;i<26;i++)
    {
        for(int j=0;j<hashMap[i];j++)
        {
            printf("%c",findChar(i));
        }
    }
    printf("\n");
    free(hashMap);
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char str[40001];
	    scanf("%s",str);
	    int len = strlen(str);
	    sortString(str,len);
	}
	return 0;
}
