// Sample code to perform I/O:
#include <stdio.h>
 
 
int binaryToDecimal(int n) 
{ 
    int num = n; 
    int dec_value = 0; 
  
    // Initializing base value to 1, i.e 2^0 
    int base = 1; 
  
    int temp = num; 
    while (temp) { 
        int last_digit = temp % 10; 
        temp = temp / 10; 
  
        dec_value += last_digit * base; 
  
        base = base * 2; 
    } 
    return dec_value; 
} 
 
int main(){
	int n,query;
	scanf("%d%d",&n,&query);
	int arr[n];
	for(int i = 0;i < n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	while(query > 0)
	{
	    int query_index;
	    scanf("%d",&query_index);
	    if(query_index == 1)
	    {
	        int location;
	        scanf("%d",&location);
	        if(arr[location - 1] == 0)
	        {
	            arr[location - 1] = 1;
	        }
	        else 
	        {
	            arr[location - 1] = 0;
	        }
	    }
	    else 
	    {
	        int left,right,number = 0;
	        scanf("%d%d",&left,&right);
	        /*
	        for(int j = left - 1;j < right;j++)
	        {
	            number = number * 10  + arr[j];
	        }
	        if(binaryToDecimal(number)%2 != 0)
	        {
	            printf("ODD");
	        }
	        else 
	        {
	            printf("EVEN");
	        }*/
	        if(arr[right - 1] == 1)
	        {
	            printf("ODD");
	        }
	        else
	        {
	            printf("EVEN");
	        }
	        printf("\n");
	    }
	    query --;
	}
	return 0;
}
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
// Write your code here
