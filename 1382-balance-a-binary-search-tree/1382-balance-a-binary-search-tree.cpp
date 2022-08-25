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
    void collectNode(TreeNode*root, vector<TreeNode*>&node)
    {
        if(not root ) return ;
        collectNode(root->left,node);
        node.push_back(root);
        collectNode(root->right, node);
    }
    TreeNode* buildTree(vector<TreeNode*>&node, int i, int n)
    {
        if(i>n) return NULL;
        int mid = (i+n)/2;
        TreeNode*bst = node[mid];
        bst->left = buildTree(node, i, mid-1);
        bst->right = buildTree(node,mid+1,n);
        return bst;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<TreeNode*> node;
        collectNode(root, node);
        return buildTree(node,0,node.size()-1);
    }
};