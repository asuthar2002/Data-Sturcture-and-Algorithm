class Solution {
public:
    int code(vector<vector<int>> &matrix, int i, int j, int p, vector<vector<int> >&dp)
    {
        // base case 
        if(i<0 || j< 0  || i>=matrix.size() || j>=matrix[0].size()) return 0;
        if( matrix[i][j] <=p) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j] =  1+max({code(matrix, i+1, j, matrix[i][j],dp),
                     code(matrix, i-1, j, matrix[i][j],dp),
                     code(matrix, i, j+1, matrix[i][j],dp),
                     code(matrix, i, j-1, matrix[i][j],dp)});
        
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int cnt = 0;
        vector<vector<int>> dp(n,vector<int> (m, -1));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cnt = max(cnt, code(matrix, i, j, -1, dp));
            }
        }
        return cnt ;
    }
};