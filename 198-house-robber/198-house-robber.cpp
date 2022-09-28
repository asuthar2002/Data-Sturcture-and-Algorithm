class Solution {
public:
    // int code(int n,vector<int> &h,vector<int>&dp)
    // {
    //     dp[0] = h[0];
    //     for(int i=1; i<n; i++)
    //     {
    //         int take = h[i];
    //         if(i>1) take = h[i]+dp[i-2];
    //         int ntake = dp[i-1];
    //         dp[i] = max(take,ntake);
    //     }
    //     return dp[n-1];
    // }
    
    // using memoization ;
    int code(int n,vector<int> &h,vector<int>&dp,int i)
    {
        if(i>=n) return 0;
        
        if(dp[i]!=-1)return dp[i];
        int take = code(n,h,dp,i+2)+h[i];
        int nottake = code(n,h,dp,i+1);
        dp[i] = max(take,nottake);
        return dp[i];
        
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(n,-1);
        return code(n,nums,v,0);
    }
};