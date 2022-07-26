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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;
        
        if(root == p || root == q)
            return root;
        
        TreeNode*lnode = lowestCommonAncestor(root->left, p ,q);
        TreeNode*rnode = lowestCommonAncestor(root->right, p, q);
        
        if(lnode != NULL && rnode == NULL)
            return lnode;
        else if(lnode == NULL && rnode != NULL)
            return rnode;
        else if (lnode != NULL && rnode != NULL)
            return root;
        
        return NULL;
    }
};