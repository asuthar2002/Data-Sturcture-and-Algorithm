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
    int findIdx(vector<int> &nums, int start,int end)
    {
        int mx = -1;
        int idx = -1;
        for(int i=start; i<=end; i++)
        {
            if(nums[i]>mx) {
                mx = nums[i];
                idx = i;
            }
        }
        return idx;
    }
    TreeNode* code(vector<int> &nums, int start, int end){
        if(start>end) return NULL;
        if(start == end) return new TreeNode(nums[start]);
        int idx = findIdx(nums,start,end);
        TreeNode*root = new TreeNode(nums[idx]);
        root->left = code(nums,start,idx-1);
        root->right = code(nums,idx+1,end);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
        return code(nums,0,nums.size()-1);
    }
};