class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0,
            end = nums.size()-1,
            mid;
        while(start<=end)
        {
            mid = (start+end)/2;
            if(nums[mid]==target) return mid;
            if( nums[start]<=nums[mid])// this is check for if target is in betwewn starting nums array; 
            {
                if(target>=nums[start] && target<=nums[mid])// here target is in between starting nums
                {
                    end = mid-1;
                }
                else 
                    start = mid+1;
            }
            else 
            {
                if(target>=nums[mid] && target<=nums[end])
                {
                    start = mid+1;
                }
                else 
                {
                    end = mid-1;
                }
            }
        }
        return -1;
    }
};