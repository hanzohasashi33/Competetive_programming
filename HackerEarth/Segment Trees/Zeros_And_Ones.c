/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int fillzeros(int num)
{
    int power = 1;
    while(num > 0)
    {
        num = num/2;
        power *= 2;
    }
    return power;
}





void build(int tree[],int num,int n)
{
    for(int i = 0;i < n;i++)
    {
        if(i < num)
        {
            tree[n + i - 1] = 1;
        }
        else 
        {
            tree[n + i - 1] = 0;
        }
    }

    for(int i = n - 2;i >= 0;i--)
    {
        tree[i] = tree[2*i + 1] + tree[2*i + 2];
    }
}




void printtree(int arr[],int n)
{
    for(int i = 0;i < n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}



void update(int tree[],int n,int index)
{
    if(tree[n + index - 1] == 0)
    {
        return ;
    }
    tree[n + index - 1] = 0;
    int parent = ((n + index - 2))/2;
    while(parent > 0)
    {
        tree[parent] -= 1;
        parent = (parent - 1)/2;
    }
    tree[0] -= 1;
}



int kthone(int tree[],int n,int k,int start,int end,int root)
{
    if(k > tree[root] || start < 0 || end > n - 1)
    {
        return -1;
    }
    else if(k == tree[root] && start == end)
    {
        return end;
    }
    int mid = (start + end)/2;
    if(k > tree[2*root + 1])
    {
        int right = kthone(tree,n,k - tree[2*root+1],mid+1,end,2*root+2);
        return right;
    }
    else 
    {
        int left = kthone(tree,n,k,start,mid,2*root+1);
        return left;
    }
}



int main()
{
    int num;
    scanf("%d",&num);
    int n = fillzeros(num);
    int *tree = malloc(sizeof(int)*(4*n));
    build(tree,num,n);
    //printtree(tree,2*n-1);
    int queries;
    scanf("%d",&queries);
    while(queries--)
    {
        int query;
        scanf("%d",&query);
        if(query == 0)
        {
            int x;
            scanf("%d",&x);
            update(tree,n,x - 1);
            //printtree(tree,2*n - 1);
        }
        else 
        {
            int x;
            scanf("%d",&x);
            int index = kthone(tree,n,x,0,n-1,0);
            if(index != -1)
            {
                printf("%d\n",index + 1);
            }
            else 
            {
                printf("-1\n");
            }
        }
    }
    return 0;
}
