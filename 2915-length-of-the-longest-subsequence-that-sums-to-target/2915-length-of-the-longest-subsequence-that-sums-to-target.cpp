class Solution {
public:
    int code(vector<int> &nums, int target, int i, vector<vector<int>>&dp){
        if(target == 0) return 0;
        if(i>= nums.size() || target<0 ) return -1001;
        if(dp[i][target] != -1)return dp[i][target];
        int take  = 1+ code(nums, target-nums[i], i+1, dp);
        int  skip = code(nums, target, i+1, dp);
        return dp[i][target] = max(take, skip);
    }
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        vector<vector<int>> dp(1001, vector<int> (1001, -1));
        int ans =  code(nums, target, 0, dp);
        cout<<ans;
        if(ans <0) return -1;
        return ans;
    }
};