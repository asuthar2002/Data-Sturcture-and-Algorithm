class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums[0]<nums[nums.size()-1])
            return nums[0];
        int i=0, j=nums.size()-1;
        int ans = nums[nums.size()-1];
        int mid;
        while(i<=j)
        {
            mid = i+(j-i)/2;
            if(nums[mid]<ans)
            {
                ans = nums[mid];
                j = mid-1;
            }
            else {
                i = mid+1;
            }
            
        }
        return ans;
    }
};