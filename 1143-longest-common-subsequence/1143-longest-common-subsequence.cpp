class Solution {
public:
    int code(string text1,string text2, vector<vector<int>> &dp)
    {
        int m = text1.size();
        int n =text2.size();
        for(int i=0; i<=n; i++)
        {
            dp[0][i] = 0;
        }
        for(int i=0; i<=m; i++)
        {
            dp[i][0] = 0;
        }
        
        for(int i=1; i<=m;i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(text1[m-i] == text2[n-j])
                {
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = max( dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        return dp[m][n];
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.size()+1,vector<int>(text2.size()+1));
        int m = text1.length();
        int n = text2.length();
        int ans = code(text1,text2,dp);
        return ans;
    }
};