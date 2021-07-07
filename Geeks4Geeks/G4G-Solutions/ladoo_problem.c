// https://practice.geeksforgeeks.org/problems/ladoo-problem/0


#include <stdio.h>
#include<stdlib.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int* arr = (int*)calloc(n,sizeof(int));
	    int* hashTable = (int*)calloc(1001,sizeof(int));
	    int i,count=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d ",&arr[i]);
	        hashTable[arr[i]]++;
	    }
	    for(i=0;i<1001;i++)
	    {
	        if(hashTable[i])
	        {
	            count++;
	        }
	    }
	    free(arr);
	    free(hashTable);
	    printf("%d\n",count);
	}
	return 0;
}
