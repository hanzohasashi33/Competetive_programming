# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def diameterOfBinaryTree(self, root: TreeNode) -> int:
        def dfs(node):
                if node is None:
                    return 0
                left = dfs(node.left)
                right = dfs(node.right)
                self.ans = max(self.ans, left+right+1)
                return max(left, right)+1
        self.ans = 1
        dfs(root)
        return self.ans-1
