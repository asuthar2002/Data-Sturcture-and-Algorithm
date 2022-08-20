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
    int i ;
    int ans;
    int code(TreeNode*root)
    {
        if(root == NULL ) return -1;
        code(root->left);
        i--;
        if(i==0) ans= root->val;
        code(root->right);
        return  ans;
    }
    int kthSmallest(TreeNode* root, int k) {
        i = k;
        return code(root);
    }
};