// https://practice.geeksforgeeks.org/problems/avl-tree-insertion/1


//

#include <bits/stdc++.h>
#define MAXN 2000
using namespace std;

struct Node
{
    int data, height;
    Node *left, *right;
    
    Node(int x)
    {
        data=x;
        left=right=NULL;
        height=1;
    }
};

bool isBST(Node *n, int lower, int upper)
{
	if(!n) return 1;
	if( n->data <= lower || n->data >= upper ) return 0;
	return isBST(n->left, lower, n->data) && isBST(n->right, n->data, upper) ;
}

pair<int,bool> isBalanced(Node* n)
{
	if(!n) return pair<int,bool> (0,1);

	pair<int,bool> l = isBalanced(n->left);
	pair<int,bool> r = isBalanced(n->right);

	if( abs(l.first - r.first) > 1 ) return pair<int,bool> (0,0);

	return pair<int,bool> ( 1 + max(l.first , r.first) , l.second && r.second );
}

bool isBalancedBST(Node* root)
{
	if( !isBST(root, INT_MIN, INT_MAX) )
		cout<< "BST voilated, inorder traversal : ";

	else if ( ! isBalanced(root).second )
		cout<< "Unbalanced BST, inorder traversal : ";

	else return 1;
	return 0;
}

void printInorder(Node* n)
{
	if(!n) return;
	printInorder(n->left);
	cout<< n->data << " ";
	printInorder(n->right);
}

Node* insertToAVL( Node* node, int data);

int main()
{
	int ip[MAXN];
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        for(int i=0; i<n; i++)
            cin>> ip[i];
        
        Node* root = NULL;
        
        for(int i=0; i<n; i++)
        {
            root = insertToAVL( root, ip[i] );
            
            if ( ! isBalancedBST(root) )
                break;
        }
        
        printInorder(root);
        cout<< endl;
    }
    return 0;
}// } Driver Code Ends


/* The structure of the Node is
struct Node
{
    int data;
    Node *left;
    Node *right;
    int height;
};
*/

Node *newNode (int key)
{
    Node *temp= new Node(key);
    temp->height=1;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

int height(Node * root)
{
    if(root==NULL)return 0;
    return root->height;
}

Node * singleLR(Node *x)
{
    Node *w=x->left;
    x->left=w->right;
    w->right=x;
    x->height=max(height(x->left),height(x->right))+1;
    w->height=max(height(w->left),x->height)+1;
    return w;
}
Node *singleRR(Node * x)
{
    Node *w=x->right;
    x->right=w->left;
    w->left=x;
    x->height=max(height(x->left),height(x->right))+1;
    w->height=max(height(w->left),x->height)+1;
}
Node *doubleLR(Node *z)
{
    z->left=singleRR(z->left);
    return singleLR(z);
}
Node *doubleRR(Node *z)
{
    z->right=singleLR(z->right);
    return singleRR(z);
}
Node* insertToAVL( Node* root, int data)
{
    if(root==NULL)
    return newNode(data);
    else
    {
        if(root->data==data)
        {
            return root;
        }
        else if(data<root->data)
        {
            root->left=insertToAVL(root->left,data);
            if((height(root->left)-height(root->right))>=2)
            {
                if(data<root->left->data)
                    root=singleLR(root);
                else root=doubleLR(root);
            }
            
        }
        else if(data>root->data)
        {
            root->right=insertToAVL(root->right,data);
            if((height(root->right)-height(root->left))>=2)
            {
                if(data>root->right->data)
                    root=singleRR(root);
                else root=doubleRR(root);
            }
        }
        root->height=max(height(root->left),height(root->right))+1;
        
        return root;
    }
}
