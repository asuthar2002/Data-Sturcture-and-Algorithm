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
    TreeNode* deleteNode(TreeNode* root, int key) {
        //base case
        if(root == NULL) return NULL;
        if(root->val > key)
        {
            root->left = deleteNode(root->left, key);
        }
        else if(root->val < key)// check for the right half;
        {
            root->right = deleteNode(root->right, key);
        }
        else // if either node is null 
        {
            if(root->left == NULL and root->right == NULL) return nullptr;
            else if(root->left == NULL) 
            {
                // TreeNode*temp = root->right;
                // free(root); 
                return root->right;;
            }
            else if(root->right == NULL) 
            {
                // TreeNode*temp = root->left;
                // delete(root);
                return root->left;
            }
            else // none of the node is null both children are persent ;
            {
                TreeNode*temp = root->right;
                while(temp->left)
                {
                    temp = temp->left;
                }
                root->val = temp->val;
                root->right = deleteNode(root->right, root->val);
                
            }
        }
        return root;
    }
};