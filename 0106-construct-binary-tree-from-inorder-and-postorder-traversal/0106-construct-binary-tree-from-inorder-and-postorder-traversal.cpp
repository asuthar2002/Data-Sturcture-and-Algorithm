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
    TreeNode* code(vector<int>&in , vector<int>&post){
        if(in.size() == 0 || post.size() == 0) return NULL;
        int rootval = post.back();
        post.pop_back();
        TreeNode*root = new TreeNode(rootval);
        int idx ;
        for(int i=0; i<in.size(); i++){
            if(in[i] == rootval){
                idx = i;
                break;
            }
        }
        vector<int> leftin(in.begin(),in.begin()+idx);
        vector<int> rightin(in.begin()+idx+1, in.end());
        vector<int> postleft(post.begin(), post.begin()+leftin.size());
        vector<int> postright(post.begin()+leftin.size(), post.end());
        root->left = code(leftin,postleft);
        root->right = code(rightin, postright);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return code(inorder, postorder);
    }
};