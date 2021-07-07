// https://practice.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/1/


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
    else if(val > (*tree)->data)
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
         return 1 + getCountOfNode(root->left, l, h) +
                    getCountOfNode(root->right, l, h);

    else if (root->data < l)
         return getCountOfNode(root->right, l, h);


    else return getCountOfNode(root->left, l, h);
}


bool isDeadEnd(Node *root);
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

        
     cout<<isDeadEnd(root);
     cout<<endl;
    }
}

// } Driver Code Ends
/*The Node structure is
struct Node {
int data;
Node * right, * left;
};*/



void fillMaps(Node* root, unordered_set<int>&internal, unordered_set<int>&leaf)
{
    if(root==NULL)  return;
    internal.insert(root->data);
    if(root->left==NULL&&root->right==NULL)    leaf.insert(root->data);
    fillMaps(root->left,internal,leaf);
    fillMaps(root->right,internal,leaf);
}


bool isDeadEnd(Node *root)
{
    if(root==NULL)
    {
        return false;
    }
    unordered_set<int> internal;
    internal.insert(0);
    unordered_set<int> leaf;
    fillMaps(root,internal,leaf);
    for(auto i = leaf.begin();i!=leaf.end();i++)
    {
        int x = *i;
        if(internal.find(x-1)!=internal.end()&&internal.find(x+1)!=internal.end())
        {
            return true;
        }
    }
    return false;
}
