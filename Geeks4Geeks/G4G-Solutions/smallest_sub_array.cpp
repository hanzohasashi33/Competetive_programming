// https://practice.geeksforgeeks.org/problems/smallest-sub-array/0


#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<stdbool.h>

int gcd(int a, int b)
{
    if(b==0)    return a;
    return gcd(b,a%b);
}


void build(int *arr,int s,int e,int *tree,int index){
    if(s==e){
        tree[index]=arr[e];
        return;
    }
    int mid=(s+e)/2;
    build(arr,s,mid,tree,2*index);
    build(arr,mid+1,e,tree,2*index+1);
    tree[index]=gcd(tree[2*index],tree[2*index+1]);
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
    return gcd(left,right);
}
int findMinLength(int arr[], int tree[], int n, int g ){
    int i,j;
    bool def = false;
    for(i=1;i<=n;i++)
    {
        if(arr[i]%g==0) def = true;
    }
    if(!def)    return -1;
    int def_value = INT_MAX;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            int gcd = query(tree,1,n,i,j,1);
            if(gcd==g)
            {
                if(j-i+1<def_value) def_value = j-i+1;
            }
        }
    }
    if(def_value==INT_MAX)  return -1;
    else    return def_value;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,g;
        scanf("%d",&g);
        scanf("%d",&n);
        int* arr = (int*)calloc(n,sizeof(int));
        int i;
        //int* st = (int*)calloc(4*n+2,sizeof(int));
        for(i=0;i<n;i++)
        {
            scanf("%d ",&arr[i]);
        }
        int* st = constructST(arr,n);
        printf("%d\n",findMinLength(arr,st,n,g));
        free(arr);
    }
    return 0;
}
