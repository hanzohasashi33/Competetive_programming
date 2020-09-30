// https://practice.geeksforgeeks.org/problems/sum-of-binary-tree/1


long int sumBT(Node* root){
queue<node*> q;
Node *temp = nullptr;
int size, sum = 0;

if(root == nullptr)
return 0;
q.push(root);
while(!q.empty()){
size = q.size();
while(size > 0){
temp = q.front();
q.pop();
sum += temp->key;
if(temp->left != nullptr)
q.push(temp->left);
if(temp->right != nullptr)
q.push(temp->right);
size--;
}
}
return sum;
}
