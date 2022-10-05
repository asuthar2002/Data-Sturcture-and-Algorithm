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
    TreeNode* addOneRow(TreeNode* root, int val, int d) {
        // use bfs
        if(d == 1)
        {
            TreeNode* node = new TreeNode(val);
            node->left = root;
            return node;
        }
        queue<TreeNode*> q;
        q.push(root);
        int cnt = 1;
        while(!q.empty())
        {
            cnt++;
            int n = q.size();
            while(n--)
            {
                TreeNode*node = q.front();
                q.pop();
                if(cnt != d)
                {
                    if(node->left) q.push(node->left);
                    if(node->right) q.push(node->right);
                }
                else
                    {
                    TreeNode*l = new TreeNode(val);
                    l->left = node->left;
                    node->left = l;
                    
                    TreeNode*r = new TreeNode(val);
                    r->right = node->right;
                    node->right = r;
                }
                
            }    
        }
        return root;
    }
};