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

    TreeNode* code(vector<int> &nums, int start, int end){
        if(start > end) return nullptr;
        if(start== end ) return new TreeNode(nums[start]);
        
        int idx = (start+end)/2;
        TreeNode*root = new TreeNode(nums[idx]);
        root->left = code(nums,start,idx-1);
        root->right = code(nums,idx+1, end);
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return code(nums,0,nums.size()-1);
    }
};