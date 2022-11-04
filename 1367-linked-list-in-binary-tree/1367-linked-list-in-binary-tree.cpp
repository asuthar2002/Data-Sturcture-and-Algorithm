/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool code(TreeNode*root, ListNode*head)
    {
        if(not head) return true;
        if(not root )return false;
        return root->val == head->val && (code(root->left, head->next) || code(root->right, head->next));
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        if(not head) return true;
        if(not root) return false;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            auto node = q.front();q.pop();
            if(node->val == head->val && code(node, head)) return true;
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        return false;
    }
};