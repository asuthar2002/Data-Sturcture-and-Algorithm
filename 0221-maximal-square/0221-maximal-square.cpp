class Solution {
public:
    int code(vector<vector<char>>&mat,int i,int j,vector<vector<int>>&dp,int&maxi)
    {
        if(i>=mat.size() || j>=mat[0].size())
        {
            return 0;
        }
        if(dp[i][j] != -1) return dp[i][j];
        int r = code(mat,i,j+1,dp,maxi);
        int d = code(mat,i+1,j+1,dp,maxi);
        int b = code(mat,i+1,j,dp,maxi);
        // int ans = 0;
        if(mat[i][j] == '1')
        {
            dp[i][j] = 1+min(r,min(d,b));
            maxi = max(maxi,dp[i][j]*dp[i][j]);
            return dp[i][j];
        }
        else return  dp[i][j] = 0;
        
    }
    int maximalSquare(vector<vector<char>>& mat) {
        int maxi = 0;
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>>dp(n,vector<int> (m,-1));
        int ans = code(mat,0,0,dp,maxi);
        return maxi;
    }
};