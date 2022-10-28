class Solution {
public:
//     int code(vector<vector<char>>&mat,int i,int j,int &maxi,vector<vector<int>>&dp)
//     {
//         if(i>=mat.size() || j>=mat[0].size()) return 0;
//         if(dp[i][j]!=-1) return dp[i][j];
//         int right = code(mat,i,j+1,maxi,dp);
//         int down = code(mat,i+1,j,maxi,dp);
//         int diagonal = code(mat,i+1,j+1,maxi,dp);
//         int ans = 0;
//         if(mat[i][j] =='1')
//         {
//             dp[i][j]=(min(right,min(down,diagonal))+1);
//             maxi = max(maxi,dp[i][j]*dp[i][j]);
//         }
//         else dp[i][j] = 0;
//         return dp[i][j];
//     }
//     int codetab(vector<vector<char>>&mat)
//     {
//         int mini = 0;
//         vector<vector<int>>dp(mat.size()+1,vector<int> (mat[0].size()+1,0));
//         for(int i=mat.size()-1; i>=0; i--)
//         {
//             for(int j=mat[0].size()-1; j>=0; j--)
//             {
//                 if(mat[i][j] == '1')
//                 {
//                     dp[i][j] = 1 + min(dp[i+1][j] , min(dp[i+1][j+1] , dp[i][j+1]));
//                     mini = max(mini,dp[i][j]*dp[i][j]);
//                 }
//             }
//         }
//         return mini;
        
//     }
    int code(vector<vector<char>>&mat)
    {
        int mini = 0;
        vector<int> curr(mat[0].size()+1,0);
        vector<int> next(mat[0].size()+1,0);
        for(int i=mat.size()-1; i>=0; i--)
        {
            for(int j=mat[0].size()-1; j>=0; j--)
            {
                int r = curr[j+1];
                int d = next[j+1];
                int b = next[j];
                if(mat[i][j]=='1')
                {
                    curr[j] = 1+min(r,min(d,b));
                    mini = max(mini,curr[j]*curr[j]);
                }
                else curr[j]=0;
            }
            next = curr;
        }
        return mini;
    }
    int maximalSquare(vector<vector<char>>& matrix) {
        // int maxi = 0;
        // vector<vector<int>> dp(matrix.size()+1,vector<int> (matrix[0].size()+1,-1));
        // int ans = code(matrix,0,0,maxi,dp);
        // return maxi;
        // int ans = codetab(matrix);
        
        int ans = code(matrix);
        return ans;
    }
};