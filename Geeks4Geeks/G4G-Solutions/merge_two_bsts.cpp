// https://practice.geeksforgeeks.org/problems/merge-two-bst-s/1



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



vector<int> merge(Node *root1,Node *root2);

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
       Node* root1 = buildTree(s);

       getline(cin, s);
       Node* root2 = buildTree(s);
    
       // getline(cin, s);

       vector<int> vec = merge(root1, root2);
       for(int i=0;i<vec.size();i++)
            cout << vec[i] << " ";
        cout << endl;
       ///cout<<"~"<<endl;
   }
   return 0;
}// } Driver Code Ends
/* The structure of Node is
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};*/

/*You are required to complete below method */


void inOrder(Node *root, vector<int>&v){
    if(!root)
        return;
    inOrder(root->left,v);
    v.push_back(root->data);
    inOrder(root->right,v);
}

void combine(vector<int>&vec1, vector<int>&vec2, vector<int>&tbr){
   auto it1 = vec1.begin(),it2 = vec2.begin();
   for(; it1 != vec1.end() and it2 != vec2.end();){
       if(*it1>*it2){
            tbr.push_back(*it2);
           ++it2;
       }
        else{
            tbr.push_back(*it1);
            ++it1;
        }
   }
   while(it1!=vec1.end()){
       tbr.push_back(*it1);
       ++it1;
   }
   while(it2!=vec2.end()){
       tbr.push_back(*it2);
       ++it2;
   }
   return; 
}

vector<int> merge(Node *root1, Node *root2)
{
   vector<int>vec1,vec2,vec3;
   inOrder(root1,vec1);
   inOrder(root2,vec2);
   combine(vec1,vec2,vec3);
   return vec3;
}
