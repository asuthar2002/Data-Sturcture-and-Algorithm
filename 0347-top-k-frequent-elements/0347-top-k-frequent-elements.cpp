class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto i : mp)
        {
            pq.push({i.second, i.first});
        }
        vector<int> ans;
        while(k--)
        {
            pair<int,int> p = pq.top();
            pq.pop();
            ans.push_back(p.second);
        }
        return ans;
    }
};