// https://practice.geeksforgeeks.org/problems/doctors-clinic/0




#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k;
	    scanf("%d %d",&n,&k);
	    printf("%d\n",(10-k)*(n-1));
	}
	return 0;
}
