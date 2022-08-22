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
    
    TreeNode* code(vector<int>& perorder, int&i,int&bound)
    {
        if(i>=perorder.size() ||perorder[i] > bound) return nullptr;
        TreeNode*root = new TreeNode(perorder[i]);
        i++;
        root->left = code(perorder,i,root->val);
        root->right = code(perorder,i,bound);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int bound = 1001;
        int i=0;
        return code(preorder, i,bound);
    }
};