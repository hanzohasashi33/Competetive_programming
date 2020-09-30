// https://practice.geeksforgeeks.org/problems/max-and-min-element-in-binary-tree/1


#include<bits/stdc++.h>
using namespace std;

// A tree node
struct node
{
	int data;
	struct node *left;
	struct node *right;
	
	node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

// Returns maximum value in a given Binary Tree
int findMax(struct node* root);
// Returns minimum value in a given Binary Tree
int findMin(struct node* root);

void insert(struct node *root,int n1,int n2,char lr)
 {
     if(root==NULL)
        return;
     if(root->data==n1)
     {
         switch(lr)
         {
          case 'L': root->left=new node(n2);
                    break;
          case 'R': root->right=new node(n2);
                    break;
         }
     }
     else
     {
         insert(root->left,n1,n2,lr);
         insert(root->right,n1,n2,lr);
     }
 }
// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    struct node *root=NULL;
    while(n--)
    {
        char lr;
        int n1,n2;
        cin>>n1>>n2;
        cin>>lr;
        if(root==NULL)
        {
            root=new node(n1);
            switch(lr){
                    case 'L': root->left=new node(n2);
                    break;
                    case 'R': root->right=new node(n2);
                    break;
                    }
        }
        else
        {
            insert(root,n1,n2,lr);
        }
    }

    cout<<findMax(root)<<" "<<findMin(root)<<endl;
    }
    return 0;
}
// } Driver Code Ends
// Returns maximum value in a given Binary Tree

int max(int a, int b, int c)
{
    if(a>=b&&a>=c)  return a;
    else if(b>=a&&b>=c)  return b;
    else return c;
}

int min(int a, int b, int c)
{
    if(a<=b&&a<=c)  return a;
    else if(b<=a&&b<=c)  return b;
    else return c;
}


int findMax(struct node* root)
{
    if(root==NULL)
    {
        return INT_MIN;
    }
    return max(root->data,findMax(root->left),findMax(root->right));
}

// Returns minimum value in a given Binary Tree
int findMin(struct node* root)
{
    if(root==NULL)
    {
        return INT_MAX;
    }
    return min(root->data,findMin(root->left),findMin(root->right));
}
