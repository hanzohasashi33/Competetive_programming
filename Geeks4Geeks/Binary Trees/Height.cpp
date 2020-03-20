int height(struct Node* node)
{
    // base case
    if (node==NULL)
        return 0;

        // recurse for left height and right height and
        // sum this with 1 which indicates root
    else
        return 1 + max(height(node->left), height(node->right));
}
