class Solution {
public:
    int code(vector<int> &cost, int n, vector<int> &dp){
        if(n==1)return cost[n];
        if(n==0)return cost[n];
        if(dp[n]!=-1)return dp[n];
        return dp[n] = cost[n]+min(code(cost,n-1,dp),code(cost, n-2,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(),-1);
        return min(code(cost, cost.size()-1, dp) , code(cost,cost.size()-2,dp));
    }
};