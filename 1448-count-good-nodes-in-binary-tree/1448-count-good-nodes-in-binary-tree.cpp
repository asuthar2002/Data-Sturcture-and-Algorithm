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
    int code(TreeNode*root, int maxVal)
    {
        if(not root )return 0;
        int cnt= 0;
        if(root->val>=maxVal)
        {
            maxVal = root->val;
            cnt++;
        }
        return cnt + code(root->left,maxVal)+code(root->right,maxVal);
    }
    int goodNodes(TreeNode* root) {
        return code(root,root->val);
    }
};