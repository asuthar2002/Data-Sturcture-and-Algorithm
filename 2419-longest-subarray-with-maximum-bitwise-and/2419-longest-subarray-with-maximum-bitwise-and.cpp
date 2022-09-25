class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int h = -1;
        int cnt =0;
        int maxi = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>h) h= nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == h) cnt++;
            else {
                maxi = max(maxi,cnt);
                cnt = 0;
            }
        }
        maxi = max(maxi,cnt);
        return maxi;
    }
};