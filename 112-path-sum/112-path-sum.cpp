/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool code(TreeNode*root, int t)
    {
        if(not root) return false;
        if(root->left == NULL and root->right == NULL ) return root->val == t;
        return code(root->left, t-root->val) || code(root->right, t-root->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return code(root, targetSum);
    }
};