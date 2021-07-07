// https://practice.geeksforgeeks.org/problems/find-a-pair-with-given-target-in-bst/1/


#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
   int data;
   Node* left;
   Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
   Node* temp = new Node;
   temp->data = val;
   temp->left = NULL;
   temp->right = NULL;

   return temp;
}


bool isPairPresent(Node *root, int k);

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
   Node* root = newNode(stoi(ip[0]));

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

           // Create the left child for the current node
           currNode->left = newNode(stoi(currVal));

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
           currNode->right = newNode(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->right);
       }
       i++;
   }

   return root;
}

int main() {
    
   int t;
   string tc;
   getline(cin, tc);
   t=stoi(tc);
   while(t--)
   {
        string s; 
       getline(cin, s);
       Node* root = buildTree(s);

       getline(cin, s);
       int k = stoi(s);
        //getline(cin, s);

       cout << isPairPresent(root, k) << endl;
       //cout<<"~"<<endl;
   }
   return 0;
}
// } Driver Code Ends
/*Complete the function below
Node is as follows
struct Node
{
    int data;
    struct Node *left, *right;
};
*/

void inOrder(struct Node* root, vector<int>&v)
{
    if(root==NULL)  return;
    inOrder(root->left,v);
    v.push_back(root->data);
    inOrder(root->right,v);
}

bool isPairPresent(struct Node *root, int target)
{
    if(root==NULL)  return false;
    vector<int>v;
    inOrder(root,v);
    int i=0;
    int j=v.size()-1;
    while(i<j)
    {
        if(v[i]+v[j]==target)
        {
            return true;
        }
        else if(v[i]+v[j]<target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return false;
}
