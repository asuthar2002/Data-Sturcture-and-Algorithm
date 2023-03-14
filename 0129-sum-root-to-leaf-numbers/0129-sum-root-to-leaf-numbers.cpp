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
   int code(TreeNode*root,int sum)
    {
        if(not root) return 0;
        sum = sum*10+root->val;
        if(not root->left && not root->right) return sum;
        return code(root->left,sum)+code(root->right,sum);
    }
    int sumNumbers(TreeNode* root) {
        return code(root,0);
    } 
};