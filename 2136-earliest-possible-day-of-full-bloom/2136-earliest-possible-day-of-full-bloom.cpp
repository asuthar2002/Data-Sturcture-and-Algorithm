class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        int n = plantTime.size();
        vector<pair<int,int>>v(n);
        for(int i=0; i<n; i++)
        {
            v[i].first = -growTime[i];
            v[i].second = plantTime[i];
        }
        sort(v.begin(),v.end());
        int t = 0,curr = 0;
        for(int i=0; i<n; i++){
            t = max(t,curr+v[i].second-v[i].first);
            curr+=v[i].second;
        }
        return t;
    }
};