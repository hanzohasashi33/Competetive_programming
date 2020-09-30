// https://practice.geeksforgeeks.org/problems/ancestors-in-binary-tree/1/

#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

bool printAncestors(struct Node *root, int target);

int main()
{
  int t;
  struct Node *child;
  scanf("%d\n", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d\n",&n);
     struct Node *root = NULL;
     if(n==1)
     {
        int a;
        cin>>a;
        cout<<a<<endl;
     }else{
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
      //  cout << n1 << " " << n2 << " " << (char)lr << endl;
        if (m.find(n1) == m.end())
        {
           parent = new Node(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];

        child = new Node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     int a;
     cin>>a;
    printAncestors(root, a);
  }
  }
  return 0;
}
// } Driver Code Ends
/*
Structure of a node is as following
struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};
*/
// Function should print all the ancestor of the target node

bool p(struct Node *root, int target)
{
     
     if(root==NULL) return false;
     if(root->data==target)
     {
         return true;
     }
     
         if((p(root->left,target)||p(root->right,target)))
         {
             cout<<root->data<<" ";
             return true;
         }
     
     return false;
}


bool printAncestors(struct Node *root, int target)
{
bool a = p(root,target);
cout<<"\n";
     }
