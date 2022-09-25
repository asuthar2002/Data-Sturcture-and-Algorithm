class Solution {
public:
    bool static comp(pair<string,int> p1,pair<string,int> p2)
    {
        if(p1.second>p2.second)return true;
        return false;
    }
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        vector<pair<string,int>> v;
        for(int i=0; i<n.size(); i++)
        {
            pair<string,int> p;
            p = {n[i],h[i]};
            v.push_back(p);
        }
        sort(v.begin(),v.end(),comp);
        vector<string> ans;
        for(int i=0; i<v.size(); i++)
        {
            ans.push_back(v[i].first);
        }
        return  ans;
    }
};