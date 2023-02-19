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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        queue<TreeNode* > q;
        q.push(root);
        bool flag = true;
        while(!q.empty())
        {
            int n = q.size();
            vector<int> fans(n);
            for(int i=0; i<n; i++)
            {
                TreeNode*node = q.front();
                q.pop();
                // here we will traverse the node using j pointer which will move with respect to i ;
                int j = (flag) ? i : (n - i - 1);
                // insted of push we will use array like append method ;
                fans[j] = node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            // reverse the flag 
            flag = !flag;
            ans.push_back(fans);
        }
        return ans;
    }
};