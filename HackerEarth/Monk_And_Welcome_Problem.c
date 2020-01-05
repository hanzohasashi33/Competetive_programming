
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);              			// Reading input from STDIN
	int a[n];
	int b[n];
	int c[n];
	for(int i = 0;i < n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(int i = 0;i < n;i++)
	{
	    scanf("%d",&b[i]);
	}
	for(int i = 0;i < n;i++)
	{
	    c[i] = a[i] + b[i];
	    printf("%d ",c[i]);
	}
	return 0;
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here
