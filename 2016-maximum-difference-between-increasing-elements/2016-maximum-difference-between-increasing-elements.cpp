class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = 0,mini = nums[0],diff =0;
        for(int i=1;i<nums.size(); i++)
        {
            int a = nums[i];
            mini = min(a,mini);
            diff = a-mini;
            ans = max(ans,diff);
        }
        if(ans<=0)return -1;
        return ans;
    }
};