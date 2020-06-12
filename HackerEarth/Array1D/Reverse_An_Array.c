
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	int arr[num];
	for(int i = 0;i < num;i++)
	{
	    scanf("%d",&arr[i]);
	}
	for(int i = num - 1;i >= 0;i--)
	{
	    printf("%d\n",arr[i]);
	}
	return 0;                                  // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

// Write your code here
