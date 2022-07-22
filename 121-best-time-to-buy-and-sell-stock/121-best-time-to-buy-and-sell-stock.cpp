class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX,
            profit = 0;
        for(int i=0;i<n;i++)
        {
            mini = min(mini,nums[i]);
            profit = max(profit , nums[i]-mini);
            cout<<profit<< " ";
        }
        return profit;
    }
};