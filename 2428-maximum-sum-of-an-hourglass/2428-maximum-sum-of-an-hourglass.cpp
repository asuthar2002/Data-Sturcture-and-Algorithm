class Solution {
public:
    int maxSum(vector<vector<int>>& g) {
        int res = 0;
        for(int i=0; i<g.size()-2; i++)
        {
            for(int j=0; j<g[0].size()-2; j++)
            {
                int sum = g[i][j] + g[i][j+1] + g[i][j+2]+
                                g[i+1][j+1] + 
                          g[i+2][j]+ g[i+2][j+1]+g[i+2][j+2];
                    res = max(res,sum);
            }
        }
        return res;
    }
};