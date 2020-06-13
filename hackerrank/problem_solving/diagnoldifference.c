#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // scanning n
    int n;
    scanf("%d", &n);
    
    // creating a matrix (2d array) of size nxn
    int arr[n][n];
    
    // variables for left and right sums
    int lsum = 0, rsum = 0;
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            // placing the scanned values and simultaneously adding the values to the respective sums
            scanf("%d", &arr[i][j]);
            
            if(i == j)
                lsum += arr[i][j];
            
            if(i + j == n - 1)
                rsum += arr[i][j];
            
        }
        
    }
    // finally printing the absolute value of the difference
    printf("%d", abs(lsum - rsum) );
    return 0;
}
