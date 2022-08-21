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
    bool code(TreeNode*root, long  int mn, long int mx)
    {
        if(not root ) return true;
        if(root->val >= mx|| root->val <=mn) return false;
        return code(root->left, mn,root->val) && code(root->right, root->val, mx);
    }
    bool isValidBST(TreeNode* root) {
        long int a = -9999999999;
        long int b = 9999999999;
          if(not root ) return true;
       return code(root,  a,b);
        
    }
};