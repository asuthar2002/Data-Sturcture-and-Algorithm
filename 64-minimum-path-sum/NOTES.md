if (i == 0 && j == 0) {
return grid[i][j];
}
if (dp[i][j] != -1) {
return dp[i][j];
}
int m = INT_MAX;
if (j > 0) {
m = grid[i][j] + getMinPath(grid, i, j - 1, dp);
}
if (i > 0) {
int s = grid[i][j] + getMinPath(grid, i - 1, j, dp);
m = min(m, s);
}
dp[i][j] = m;
return dp[i][j];