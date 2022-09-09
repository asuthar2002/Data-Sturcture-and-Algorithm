class Solution {
public:
    int code(vector<int>&cost,vector<int>&dp,int n)
    {
        if(n==0)return cost[n];
        if(n==1)return cost[n];
        if(dp[n]!=-1)return dp[n];
        dp[n] = cost[n]+min(code(cost,dp,n-1),code(cost,dp,n-2));
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size(),-1);
        int ans = min( code(cost, dp, cost.size()-1),code(cost,dp,cost.size()-2));
        return ans;
    }
};