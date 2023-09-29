class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums[0]<nums[nums.size()-1]){
            // this means arr is increasing ;
            for(int i=1; i<nums.size(); i++){
                if(nums[i-1]<=nums[i])continue;
                else return false;
            }
        }else {
            // this means arr is either decreaing or constant ;
            for(int i=nums.size()-2; i>=0; i--){
                if(nums[i]>=nums[i+1])continue;
                else return false;
            }
        }
        return true;
    }
};