class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> v;
        for(auto it:arr){
            int cnt = 0;
            int a = it;
            while(it){
                cnt+=(it&1);
                it>>=1;
            }
            v.push_back({cnt, a});
        }
        sort(v.begin(), v.end());
        vector<int> ans;
        for(auto it:v)ans.push_back(it.second);
        return ans;
        return {};
    }
};