class Solution {
public:
    int code(vector<vector<int>>&g, int i,int row ,int n, int m)
    {
        if(i>=n) return row;
        
        if(g[i][row] == 1)
        {
            if(row == m-1  || g[i][row+1] == -1)return -1;
            if(g[i][row+1] == 1) return code(g,i+1,row+1,n,m);
        }
        if(g[i][row] == -1)
        {
            if(row == 0 || g[i][row-1] == 1) return -1;
            if(g[i][row-1] == -1) return code(g,i+1,row-1,n,m);
        }
        return -1;
    }
    vector<int> findBall(vector<vector<int>>& g) {
        int n = g.size();
        int m = g[0].size();
        vector<int> ans;
        for(int i=0; i<m ;i++)
        {
            int a = code(g,0,i,n,m);
            ans.push_back(a);
        }
        return ans;
    }
};