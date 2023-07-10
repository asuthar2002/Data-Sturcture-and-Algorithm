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
    int code(TreeNode*root){
        if(not root)return 0;
        int rsize= code(root->right);
        int lsize = code(root->left);
        if(not root->left and not root->right ) return 1;
        if(not  root->left) return 1+rsize;
        if(not  root->right )return 1+lsize;
        return min(rsize,lsize)+1;
    }
    int minDepth(TreeNode* root) {
        return code(root );
    }
};