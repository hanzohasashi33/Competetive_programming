// https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1


//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 

void printInorder (struct Node* node)
{
    if (node == NULL)
    return;

    printInorder (node->left);
    printf("%d ", node->data);
    printInorder (node->right);
}

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
    return NULL;

    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));


            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    return root;
}


Node*  binaryTreeToBST (Node *root);

 // } Driver Code Ends
//User function template for C++

/* The Node structure is
struct Node
{
int data;
Node* left;
Node* right;
}; */


void inOrder(Node* root, vector<int>&v)
{
    if(root==NULL)  return;
    inOrder(root->left,v);
    v.push_back(root->data);
    inOrder(root->right,v);
}


Node* vectorToBST(vector<int>&v,int left, int right)
{
    if(left>right)  return NULL;
    int mid = (left+right)/2;
    Node* root = new Node(v[mid]);
    root->left = vectorToBST(v,left,mid-1);
    root->right = vectorToBST(v,mid+1,right);
    return root;
}

Node *binaryTreeToBST (Node *root)
{
    vector<int>v;
    inOrder(root,v);
    sort(v.begin(),v.end());
    Node* newRoot = vectorToBST(v,0,v.size()-1);
    return newRoot;
}

// { Driver Code Starts.


int main()
{
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        Node *res = binaryTreeToBST (root);
        printInorder(res);
        cout<<endl;
    }
    return 0;
}
  // } Driver Code Ends
