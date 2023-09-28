class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0 , j = nums.size()-1;
        while(i<j){
            if(nums[j]%2==0){ 
                swap(nums[i], nums[j]);
                i++;
            }
            else if(nums[j]%2==1)j--;
            
            if(nums[i]%2==1){
                swap(nums[j], nums[i]);
                j--;
            }
            else if(nums[i]%2==0)i++;
        }
        return nums;
    }
};