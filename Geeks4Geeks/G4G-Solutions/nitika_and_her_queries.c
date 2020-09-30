// https://practice.geeksforgeeks.org/problems/nitika-and-her-queries/0/


#include <stdio.h>
#include<stdlib.h>


void build(int *arr,int s,int e,int *tree,int index){
    if(s==e){
        tree[index]=arr[e];
        return;
    }
    int mid=(s+e)/2;
    build(arr,s,mid,tree,2*index);
    build(arr,mid+1,e,tree,2*index+1);
    tree[index]=tree[2*index]^tree[2*index+1];
}

int *constructST(int arr[],int n){
  int *tree =(int*)calloc(4*n+1,sizeof(int));
  build(arr,0,n-1,tree,1);
  return tree;
}


int query(int *tree,int ss,int se,int qs,int qe,int index){
    if(ss>=qs&&se<=qe){
        return tree[index];
    }
    if(qe<ss||qs>se)  return 0;
    int mid=(ss+se)/2;
    int left=query(tree,ss,mid,qs,qe,2*index);
    int right=query(tree,mid+1,se,qs,qe,2*index+1);
    return left^right;
}
int findXOR(int tree[] , int n, int a, int b){
    return query(tree,0,n-1,a,b,1);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,q;
        scanf("%d %d",&n,&q);
        int* arr = (int*)calloc(n,sizeof(int));
        int i;
        //int* st = (int*)calloc(4*n+2,sizeof(int));
        for(i=0;i<n;i++)
        {
            scanf("%d ",&arr[i]);
        }
        int* st = constructST(arr,n);
        while(q--)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            a--;
            b--;
            printf("%d\n",query(st,0,n-1,0,a-1,1)^query(st,0,n-1,b+1,n-1,1));
        }
        free(arr);
    }
    return 0;
}
