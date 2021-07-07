// https://practice.geeksforgeeks.org/problems/delete-nodes-greater-than-k/1


#include<bits/stdc++.h>
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

Node * deleteNode(Node *, int);

void inorder(Node *root)
{
	if(root)
	{
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
Node* search(Node* root, int key)
{
    // Base Cases: root is null or key is present at root
    if (root == NULL || root->data == key)
       return root;
    
    // Key is greater than root's key
    if (root->data < key)
       return search(root->right, key);
 
    // Key is smaller than root's key
    return search(root->left, key);
}

void insert(Node ** tree, int val)
{
    Node *temp = NULL;
    if(!(*tree))
    {
        temp = new Node(val);
        *tree = temp;
        return;
    }

    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val >= (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }

}

int getCountOfNode(Node *root, int l, int h)
{
    if (!root) return 0;
    if (root->data == h && root->data == l)
        return 1;
    if (root->data <= h && root->data >= l)
         return 1 + getCountOfNode(root->left, l, h) + getCountOfNode(root->right, l, h);
    else if (root->data < l)
         return getCountOfNode(root->right, l, h);
    else return getCountOfNode(root->left, l, h);
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
    //int i;
        root = NULL;
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            insert(&root, k);
        }
        
        int s;
        cin>>s;
        
    Node *R= deleteNode(root,s);
    	inorder(R);
      cout<<endl;
    }
}


// } Driver Code Ends
/*The node structure
struct Node {
int data;
Node * right, * left;
};*/

/*The function should return the root of the modified tree*/

void inOrder(Node* root, int k,vector<int>&v)
{
    if(root==NULL)
    {
        return;
    }
    inOrder(root->left,k,v);
    if(root->data<k)    v.push_back(root->data);
    inOrder(root->right,k,v);
}

Node* newBST(vector<int>&v,int low, int high)
{
    if(low>high)    return NULL;
    int mid = low+(high-low)/2;
    Node* root = new Node(v[mid]);
    root->left = newBST(v,low,mid-1);
    root->right = newBST(v,mid+1,high);
    return root;
}


Node* deleteNode(Node* root, int key)
{
    vector<int>v;
    inOrder(root,key,v);
    Node* newRoot = newBST(v,0,v.size()-1);
    return newRoot;
}
