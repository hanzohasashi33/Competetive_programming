#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    long long int stack[100000],max[100000],x;
    long int N,top=-1,topm=0;
    int q;
    scanf("%ld",&N);
    for(long int i=0;i<N;i++)
        max[i]=0;
    
    for( long int i=0;i<N;i++ )
    {    
        scanf("%d",&q);
        switch(q)
        {
            case 1: scanf(" %lld",&x);
                    if(max[topm] <= x)
                    {
                        max[++topm]=x;
                    }
                    stack[++top]=x;
                    break;
            case 2: if(max[topm]==stack[top])
                        --topm;
                    --top;
                    break;
            case 3: 
                    printf("%lld\n",max[topm]);
                    break;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
