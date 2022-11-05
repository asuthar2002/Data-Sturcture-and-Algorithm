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
    
    int f(vector<int> arr)
    {
        int n = arr.size();
        vector<vector<int>> dp(n+1, vector<int> (n+1, 0));
        for(int i=n-1; i>=0; i--)
        {
            for(int j=i-1; j>=-1; j--)
            {
                int take = 0;
                if(j==-1 || arr[i]>arr[j])
                    take = 1+dp[i+1][i+1];
                int ntake = dp[i+1][j+1];
                dp[i][j+1] = max(take , ntake);
            }
        }
        return dp[0][0];
    }
    int lengthOfLIS(vector<int>& nums) {
        // vector<vector<int>>dp(nums.size(),vector<int>(nums.size()+1,-1));
        // return code(nums,0,-1,dp);
        return f(nums);
    }
};