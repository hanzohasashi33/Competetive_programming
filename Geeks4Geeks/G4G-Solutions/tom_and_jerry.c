// https://practice.geeksforgeeks.org/problems/tom-and-jerry/0


#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    if(n%2==0)
	    {
	        printf("1\n");
	    }
	    else
	    {
	        printf("0\n");
	    }
	}
	return 0;
}
