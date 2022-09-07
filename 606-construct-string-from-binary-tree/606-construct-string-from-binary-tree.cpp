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
    void code(TreeNode*root, string &s)
    {
        if(not root || (root->left == NULL && root->right == NULL) )return;
        if(root->left == NULL && root->right != NULL)
        {
            s+= "()";
        }
        
        if(root->left){
            s+=("(" + to_string(root->left->val));
            code(root->left,s);
            s+=+")";
        }
        if(root->right)
        {
            s+=("("+to_string(root->right->val));
            code(root->right,s);
            s+=")";
        }
        return ;
    }
    
    string tree2str(TreeNode* root) {
        string s;
        
        s+=to_string(root->val);
        code(root, s);
        return  s;
    }
};