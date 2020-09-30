// https://practice.geeksforgeeks.org/problems/normal-bst-to-balanced-bst/1


#include <bits/stdc++.h>
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

Node* insert(struct Node* node, int key){
	if (node == NULL) return new Node(key);
	if (key < node->data)
		node->left = insert(node->left, key);
	else if (key > node->data)
		node->right = insert(node->right, key);
	return node;
}

void preOrder(Node* node)
{
	if (node == NULL)return;
	printf("%d ", node->data);
	preOrder(node->left);
	preOrder(node->right);
}

int height(struct Node* node) 
{
   if (node==NULL) return 0;
   else
   {
       int lDepth = height(node->left);
       int rDepth = height(node->right);
       if (lDepth > rDepth) return(lDepth+1);
       else return(rDepth+1);
   }
} 

Node* buildBalancedTree(Node* root);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        struct Node *root = NULL;
        int n, temp;
        cin>>n;
        while(n--)
        {
            cin>>temp;
            root = insert(root, temp);
        }
        // cout<<height(root)<<endl;
        root = buildBalancedTree(root);
        cout<<height(root)<<endl;
    }
	return 0;
}
// } Driver Code Ends
/*Structure of the Node of the BST is as
struct Node
{
	int data;
	Node* left, *right;
};
*/

void inOrder(Node* root, vector<int>&v)
{
    if(root==NULL)
    {
        return;
    }
    inOrder(root->left,v);
    v.push_back(root->data);
    inOrder(root->right,v);
}


Node* buildBST(vector<int>&v, int start, int end)
{
    if(start>end)
    {
        return NULL;
    }
    int mid = (start+end)/2;
    Node* temp = new Node(v[mid]);
    temp->left = buildBST(v,start,mid-1);
    temp->right = buildBST(v,mid+1,end);
    return temp;
}


Node* buildBalancedTree(Node* root)
{
	vector<int>v;
	inOrder(root,v);
	Node* newRoot = buildBST(v,0,v.size()-1);
	return newRoot;
}
