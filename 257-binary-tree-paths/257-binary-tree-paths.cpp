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
        
    void code(TreeNode*root, vector<string> &ans, string rout)
    {
        if(not root) return ;
//         if(root->left )
//         {
//             rout+=(to_string(root->val)+"->");
//             root = root->left;
//         }
//         else if(root->right)
//         {
//             rout += (to_string(root->val)+"->");
//             root = root->right;
//         }
//         else 
//         {
//             ans.push_back(rout);
//             rout = "";
//         }
        
        if(root->left||root->right)rout+=(to_string(root->val)+"->");
        else
        {
            rout+=(to_string(root->val));
            ans.push_back(rout);
        }
        
        code(root->left, ans,rout);
        code(root->right, ans,rout);
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string rout = "";
        code(root, ans,rout);
        return ans;
    }
};