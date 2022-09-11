class Solution {
public:
//     int code(vector<vector<int>> &grid,int i,int j)
//     {
//         if(i==grid.size()-1 && j==grid[0].size()-1)
//             return grid[i][j];
//         if(i>=grid.size()||j>=grid[0].size()) 
//             return 1000;
//         int a =grid[i][j] + code(grid,i+1,j);
//         int b =grid[i][j] + code(grid,i,j+1);
        
//         return min(a,b);
//     }
//     int minPathSum(vector<vector<int>>& grid) {
//         int n = grid.size();
//         int m = grid[0].size();
//         int ans =  code(grid,0,0);
//         return ans;
    
    
    
    int code(vector<vector<int>> &grid,vector<vector<int>> &dp, int i, int j)
{
    if (i == grid.size() - 1 && j == grid[0].size() - 1)
    {
        // dp[i][j] = grid[i][j];
        return grid[i][j];
    }
    if (i >= grid.size() || j >= grid[0].size())
        return 1000;

    if(dp[i][j] != -1) return dp[i][j];
    int a = grid[i][j] + code(grid,dp, i + 1, j);
    int b = grid[i][j] + code(grid,dp , i, j + 1);
    
    
    return dp[i][j] = min(a,b);
}
int minPathSum(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> dp(n + 1, vector<int>(m, -1));
    int ans = code(grid, dp, 0, 0);
    return ans;

    }
};