class Solution {
public:
    int code(vector<int> &arr, int i,int p,vector<vector<int>>&dp)
    {
        if(i>=arr.size()) return 0;
        if(dp[i][p+1] != -1) return dp[i][p+1];
        int len =0;
        if(p==-1 || arr[i]>arr[p]) len = 1+code(arr,i+1,i,dp);
        return dp[i][p+1] = max(len,code(arr,i+1,p,dp));
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size()+1,-1));
        return code(nums,0,-1,dp);
    }
};