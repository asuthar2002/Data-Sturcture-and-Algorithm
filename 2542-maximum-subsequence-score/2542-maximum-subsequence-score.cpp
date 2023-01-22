class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        long long s = 0, ans = 0;
        vector<pair<int,int>> v;
        for(int i=0; i<nums1.size(); i++){
            v.push_back({nums2[i], nums1[i]});
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        priority_queue<int,vector<int> , greater<int>> p;
        for(int i=0; i<v.size(); i++){
            p.push(v[i].second);
            s+=v[i].second;
            if(p.size()>k) {
                s-=p.top();
                p.pop();
            }
            if(p.size()==k){
                ans = max(ans, s*v[i].first);
            }
        }
        return ans;
    }
};