// https://practice.geeksforgeeks.org/problems/range-minimum-query/1


#include<bits/stdc++.h>
using namespace std;

int *constructST(int arr[],int n);


int RMQ(int st[] , int n, int a, int b);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
            cin>>A[i];
        int Q;
        cin>>Q;



        int *segTree = constructST(A,N);

        for(int i=0;i<Q;i++)
        {
            int start,e;
            
            cin>>start>>e;
            if(start>e)
            {
                swap(start,e);
            }
            cout<<RMQ(segTree,N,start,e)<<" ";
        }
        cout<<endl;
    }
}
// } Driver Code Ends
/* The functions which 
builds the segment tree */
void build(int *arr,int s,int e,int *tree,int index){
    //base case
    if(s==e){
        tree[index]=arr[e];
        return;
    }
    int mid=(s+e)/2;
    build(arr,s,mid,tree,2*index);
    build(arr,mid+1,e,tree,2*index+1);
    tree[index]=min(tree[2*index],tree[2*index+1]);
    //return;
}

int *constructST(int arr[],int n){
  int *tree =new int[4*n+1];
  build(arr,0,n-1,tree,1);
  return tree;
  
}
/* The functions returns the
 min element in the range
 from a and b */
int query(int *tree,int ss,int se,int qs,int qe,int index){
    if(ss>=qs and se<=qe){
        return tree[index];
    }
    if(qe<ss or qs>se)  return INT_MAX;
    int mid=(ss+se)/2;
    int left=query(tree,ss,mid,qs,qe,2*index);
    int right=query(tree,mid+1,se,qs,qe,2*index+1);
    return min(left,right);
}
int RMQ(int tree[] , int n, int a, int b){
    //Your code here
    return query(tree,0,n-1,a,b,1);
}
