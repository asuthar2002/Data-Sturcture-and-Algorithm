class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        vector<vector<int>> result;
        if(nums.size()==0)return {};
        sort(nums.begin(),nums.end());
        result.push_back(nums[0]);
        
        int j=0;
        for(int i=1;i<nums.size();i++)
        {
            
            // if our array overlaps then we need to update them ;
            if(result[j][1]>=nums[i][0])
                result[j][1]=max(result[j][1],nums[i][1]);
            else  // else we don't need to update them just push it into the result array;
                j++,result.push_back(nums[i]);
        }
        return result;
    }
};