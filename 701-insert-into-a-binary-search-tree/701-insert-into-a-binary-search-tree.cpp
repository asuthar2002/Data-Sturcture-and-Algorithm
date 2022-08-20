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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        // base case 
        if(root == NULL) return (new TreeNode(val));
        
        if(root->val>val) //call for left half of the tree 
        {
            root->left = insertIntoBST(root->left, val);
        }
        // else for the right half of the tree
        else {
            root->right = insertIntoBST(root->right, val);
        }
        return root;
    }
};