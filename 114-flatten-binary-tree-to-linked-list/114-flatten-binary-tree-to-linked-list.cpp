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
    void store(TreeNode*root, vector<int> &ans)
    {
        if(not root) return ;
        ans.push_back(root->val);
        store(root->left, ans);
        store(root->right, ans);
    }
    void BuildTree(TreeNode*root,vector<int>&ans)
    {
        for(int i=1; i<ans.size(); i++)
        {
            root->right = new TreeNode(ans[i]);
            root->left = NULL;
            root = root->right;
        }
    }
    void flatten(TreeNode* root) {
        vector<int> ans;
        store(root, ans);
        BuildTree(root,ans);
    }
};