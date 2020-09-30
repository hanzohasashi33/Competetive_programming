// https://practice.geeksforgeeks.org/problems/height-of-heap/0


#include <stdio.h>
#include<stdlib.h>
#include<math.h>

unsigned int Log2n(unsigned int n) 
{ 
    return (n > 1) ? 1 + Log2n(n / 2) : 0; 
} 

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int* arr = (int*)calloc(n,sizeof(int));
	    int i;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d ",&arr[i]);
	    }
	    printf("%d\n",Log2n(n));
	    free(arr);
	    
	}
	return 0;
}
