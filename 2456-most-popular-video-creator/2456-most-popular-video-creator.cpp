#define ll long long 
class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& c, vector<string>& ids, vector<int>& views) {
        unordered_map<string,ll> m;
        unordered_map<string,vector<pair<string,ll>>> ans;
        ll maxi = 0;
        for(int i=0; i<c.size(); i++)
        {
            m[c[i]]+=views[i];
            maxi = max(maxi,m[c[i]]);
            ans[c[i]].push_back({ids[i],views[i]});
        }
        vector<vector<string>> sol;
        for(auto it:m)
        {
            if(it.second == maxi)
            {
                string s = ans[it.first][0].first;
                int n = ans[it.first][0].second;
                for(auto x: ans[it.first])
                {// here we are taraversing the vector of pair that store the value of id and views ;
                    if(x.second>n) n = x.second , s = x.first; 
                    else if(x.second == n and s > x.first) s = x.first;
                }
                vector<string> v;
                v.push_back(it.first);
                v.push_back(s);
                sol.push_back(v);
            }
        }
        return sol;
    }
};