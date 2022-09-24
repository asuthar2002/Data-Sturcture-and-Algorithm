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
    
    void code(TreeNode*root, vector<vector<int>> &ans, int t,vector<int> res)
    {
        if(not root ) return ;
        if(not root->left and not root->right and t == root->val){
            res.push_back(root->val);
            ans.push_back(res);
            return ;
        }
        res.push_back(root->val);
        code(root->left,ans,t-root->val,res);
        code(root->right,ans,t-root->val,res);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        code(root,ans,targetSum,{});
        return ans;
    }
};