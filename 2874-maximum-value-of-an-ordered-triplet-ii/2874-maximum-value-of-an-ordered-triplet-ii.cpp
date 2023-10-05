class Solution {
public:
    typedef long long ll;
    long long maximumTripletValue(vector<int>& nums) {
        priority_queue<pair<int,int>> q;
        // using long long ll;
        int n = nums.size();
        ll maxi = nums[0];
        ll sum = 0;
        ll ans = 0;
        for(auto it=2; it<n; it++)q.push({nums[it],it});
        for(int i=0; i<nums.size()-1; i++){
            sum = (ll)max(sum, maxi-nums[i]);
            maxi = (ll)max(maxi, (ll)nums[i]);
            while(q.top().second<=i)q.pop();
            ans = (ll)max(ans,sum*q.top().first);
        }
        if(ans<0)return 0;
        return ans;
    }
};