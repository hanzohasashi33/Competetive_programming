/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        vector<int> res;
        if (!root){return res;}
        st.push(root);
        TreeNode* head=root;
        while (!st.empty()){
            TreeNode* top = st.top();
            res.push_back(top->val);
            st.pop();
            if (top->right!=NULL){st.push(top->right);}
            if (top->left!=NULL){st.push(top->left);}
        }
        return res;
 
    }
};
