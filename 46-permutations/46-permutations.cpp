class Solution {
public:
    void code( vector<int> &nums, int index, vector<vector<int>>&ans)
    {
        if(index==nums.size())
        {
            ans.push_back(nums);
            return ;
        }
        for(int i=index; i<nums.size(); i++)
        {
            swap(nums[i],nums[index]);
            code(nums,index+1,ans);
            
            swap(nums[i],nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int index = 0;
        code(nums,index,ans);
        return ans;
    }
};