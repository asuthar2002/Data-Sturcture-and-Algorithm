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
        if(not root) return 0;
        int l=0, r=0;
        TreeNode*lr = root;
        TreeNode*rr = root;
        while(lr){ l++; lr = lr->left; }
        while(rr){ r++; rr = rr->right; }
        if(l == r) return pow(2, r)-1;
        return 1+code(root->left)+code(root->right);
    }
    int countNodes(TreeNode* root) {
        return code(root );
    }
};