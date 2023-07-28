class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        reverse(nums.begin(), nums.end());
        long long int sum = 0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]<=sum)sum+=nums[i];
            else sum = nums[i];
        }
        return sum;
    }
};