// https://practice.geeksforgeeks.org/problems/search-a-node-in-bst/1


#include<bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};

bool search(Node* root, int x);

Node *insert(Node *tree, int val)
{
    Node *temp = NULL;
    if (tree == NULL)
        return new Node(val);

    if (val < tree->data)
    {
        tree->left = insert(tree->left, val);
    }
    else if (val > tree->data)
    {
        tree->right = insert(tree->right, val);
    }
    
    return tree;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root = NULL;

        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            root = insert(root, k);

        }

        int s;
        cin>>s;
        
     cout<<search(root,s);
     cout<<endl;
    }
}

// } Driver Code Ends
/* Node structure 

struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/

/*You are required to complete this method*/
bool search(Node* root, int x)
{
    if(root==NULL)
    {
        return false;
    }
    if(root->data==x)
    {
        return true;
    }
    if(root->data>x)
    {
        return search(root->left,x);
    }
    return search(root->right,x);
}
