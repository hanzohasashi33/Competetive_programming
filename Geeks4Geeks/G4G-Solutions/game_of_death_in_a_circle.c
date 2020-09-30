// https://practice.geeksforgeeks.org/problems/game-of-death-in-a-circle/0


#include <stdio.h>


int game_of_death(int n, int k)
{
    if(n==1)
    {
        return n;
    }
    else
        return (game_of_death(n-1,k) + (k-1))%n + 1;
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k;
	    scanf("%d %d",&n,&k);
	    printf("%d\n",game_of_death(n,k));
	}
	return 0;
}
