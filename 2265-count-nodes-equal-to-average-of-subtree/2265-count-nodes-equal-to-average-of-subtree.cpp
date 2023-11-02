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
    int ans = 0;
    pair<int,int> code(TreeNode*root){
        if(not root) return {0,0};
        
        auto l = code(root->left);
        int l_val = l.first;
        int l_cnt = l.second;
        
        auto r = code(root->right);
        int r_val = r.first;
        int r_cnt = r.second;
        
        int sum = l_val+r_val+root->val;
        int cnt = l_cnt+r_cnt+1;
        if((sum/cnt) == root->val) ans++;
        return {sum, cnt};
    }
    int averageOfSubtree(TreeNode* root) {
        code(root);
        return ans;
    }
};