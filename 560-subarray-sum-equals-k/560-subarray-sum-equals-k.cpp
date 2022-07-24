class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;
        int sum = 0;
        unordered_map<int,int> m = {{0,1}};
        for(auto num : nums)
        {
            sum += num;
            int target = sum-k;
            if(m.count(target))
                ans += m[target];
            ++m[sum];

        }
        return ans;
    }
};