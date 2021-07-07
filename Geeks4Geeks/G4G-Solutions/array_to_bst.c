// https://practice.geeksforgeeks.org/problems/array-to-bst/0


#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* left;
    struct node* right;
    int data; 
};

struct node* createBST(int arr[], int left, int right)
{
    if(left>right)
    {
        return NULL;
    }
    struct node* root = (struct node*)malloc(sizeof(struct node));
    int mid = (left+right)/2;
    root->data = arr[mid];
    root->left = createBST(arr,left,mid-1);
    root->right = createBST(arr,mid+1,right);
    return root;
}

void preorder_traversal(struct node* root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d ",root->data);
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        int* arr = (int*)calloc(n,sizeof(int));
        for(i=0;i<n;i++)
        {
            scanf("%d ",&arr[i]);
        }
        struct node* root = createBST(arr,0,n-1);
        preorder_traversal(root);
        printf("\n");
        free(arr);
    }
    return 0;
}
