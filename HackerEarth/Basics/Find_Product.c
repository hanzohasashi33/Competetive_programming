// Write your code here
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int n;
    scanf("%d",&n);
    int i = 0;
    double arr[n];
    double answer = 1;
    for(i = 0;i < n;i++)
    {
        scanf("%lf",&arr[i]);
        answer = fmod((answer * arr[i]),(pow(10,9) + 7));
    }
    printf("%.lf",answer);
    return 0;
}
