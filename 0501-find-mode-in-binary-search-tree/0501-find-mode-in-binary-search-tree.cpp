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
    void code(TreeNode*root, unordered_map<int,int> &m){
        if(not root) return ;
        code(root->left,m);
        m[root->val]++;
        code(root->right,m);
    }
    vector<int> findMode(TreeNode* root) {
        if(not root) return {};
        if(not root->left and not root->right) return {root->val};
        unordered_map<int,int> m;
        code(root,m);
        vector<int> ans;
        int maxi = INT_MIN;
        for(auto it:m) if(it.second>maxi) maxi  = it.second;
        for(auto it:m) if(it.second == maxi) ans.push_back(it.first);
        return ans;
        return {};
    }
};