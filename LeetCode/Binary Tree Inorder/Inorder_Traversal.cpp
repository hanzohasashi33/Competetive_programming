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
    vector<int> inorderTraversal(TreeNode* root) {
        stack <TreeNode *> s;
        vector <int> res;
        TreeNode * current = root;
        
        while(current != NULL || s.empty() == false)
        {
            while(current != NULL)
            {
                s.push(current);
                current = current->left;
            }
            
            current = s.top();
            s.pop();
            res.push_back(current->val);
            current = current->right;
        }
        
        return res;
    }
};
