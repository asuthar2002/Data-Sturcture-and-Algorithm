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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    if (inorder.size() == 0 || postorder.size() == 0) {
        return nullptr;
    }
    
    int root_val = postorder.back();
    postorder.pop_back();
    TreeNode* root = new TreeNode(root_val);
    
    int root_index = 0;
    for (int i = 0; i < inorder.size(); i++) {
        if (inorder[i] == root_val) {
            root_index = i;
            break;
        }
    }
    
    vector<int> left_inorder(inorder.begin(), inorder.begin() + root_index);
    vector<int> right_inorder(inorder.begin() + root_index + 1, inorder.end());
    vector<int> left_postorder(postorder.begin(), postorder.begin() + left_inorder.size());
    vector<int> right_postorder(postorder.begin() + left_inorder.size(), postorder.end());
    
    root->left = buildTree(left_inorder, left_postorder);
    root->right = buildTree(right_inorder, right_postorder);
    
    return root;
    }
};