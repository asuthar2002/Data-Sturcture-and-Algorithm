class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        set<int> s1;
        set<int> res;
        vector<int> v;
        for(auto it:nums2) s1.insert(it);
        for(auto it:nums1) {
            if(s1.find(it) == s1.end()) res.insert(it);
        }
        for(auto it:res) v.push_back(it);
        ans.push_back(v);
        s1.clear();
        res.clear();
        v.clear();
        for(auto it:nums1) s1.insert(it);
        for(auto it: nums2){
            if(s1.find(it) == s1.end()) res.insert(it);
        }
        for(auto it:res) v.push_back(it);
        ans.push_back(v);
        return ans;
    }
};