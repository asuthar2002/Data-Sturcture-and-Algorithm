class Solution {
public:
    bool code(vector<int> &nums, int i, vector<int >&dp)
    {
        if(i==nums.size()-1) return true;
        if(i>nums.size()) return false;
        if(dp[i] != -1) return dp[i];
        int reach = nums[i]+i;
        for(int j=i+1; j<=reach; j++)
        {
            if(code(nums, j,dp)) return dp[i] = true;
        }
        return dp[i] = false;
    }
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(nums.size()+1, -1);
        return code(nums, 0, dp);
    }
};