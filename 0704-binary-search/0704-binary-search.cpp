class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0, j=nums.size()-1;
        int mid;
        while(i<=j){
            mid = (j-i)/2 +i;
            if(nums[mid]==target)return mid;
            else if(nums[mid]<target) i=mid+1;
            else j=mid-1;
        }
        return -1;
    }
};