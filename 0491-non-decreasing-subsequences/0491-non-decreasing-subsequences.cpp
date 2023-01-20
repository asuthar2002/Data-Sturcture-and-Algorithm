class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        for(int num=0; num<(1<<n); num++){
            vector<int> res;
            for(int i=0; i<n; i++){
                if((num&(1<<i))){
                    if(res.empty()) res.push_back(nums[i]);
                    else if(nums[i]>=res.back()) res.push_back(nums[i]);
                }
            }
            if(res.size()>1) ans.push_back(res);
        }
        set<vector<int>> s;
        for(auto it:ans) s.insert(it);
        ans.clear();
        for(auto it:s) ans.push_back(it); 
        return ans;
    }
};