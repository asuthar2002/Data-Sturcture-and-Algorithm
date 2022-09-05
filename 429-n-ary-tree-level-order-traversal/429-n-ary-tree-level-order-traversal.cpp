/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void code(Node*root, vector<vector<int>> &ans)
    {
        vector<int> result;
        if(not root ){
            ans.push_back(result);
            return ;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int n = q.size();
            vector<int> v;
            for(int i=0; i<n; i++)
            {
                Node*front = q.front();
                q.pop();
                v.push_back(front->val);
                for(int j=0; j<front->children.size(); j++)
                {
                    q.push(front->children[j]);
                }
                
            }
                ans.push_back(v);
        }
    }
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(not root)return ans;
        code (root, ans);
        return ans;
        
    }
};