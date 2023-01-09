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
    void code(TreeNode*root, vector<int> &ans){
        if(not root) return ;
        ans.push_back(root->val);
        code(root->left,ans);
        code(root->right, ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        if(not root) return {};
        vector<int> ans;
        code(root, ans);
        return ans;
    }
};