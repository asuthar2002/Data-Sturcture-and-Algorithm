class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
         if(nums.size() == 0 ){
            return {-1,-1};
        }
        int first = -1,second = -1,start = 0,end = nums.size()-1;
        int mid;
        while(start<=end){
            mid = (end+start)/2;
            if(nums[mid] == target){
                first = mid; // finds the first occurence
                end = mid-1;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        start = 0,end = nums.size()-1;
        while(start<=end){
            mid = (end+start)/2;
            if(nums[mid] == target){
                second = mid; // finds the last occurence
                start = mid+1;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return {first,second};
    }
};