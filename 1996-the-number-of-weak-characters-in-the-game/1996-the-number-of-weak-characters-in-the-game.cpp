class Solution {
public:
    static bool comp(vector<int>& a, vector<int>& b) {
        if (a[0] != b[0]) return a[0] > b[0];
        return a[1] < b[1];
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        sort(properties.begin(),properties.end(),comp);
        int cnt  = 0;
        int mx = INT_MIN;
        for(auto it : properties)
        {
            if(mx>it[1])cnt++;
            else mx = it[1];
        }
        return cnt;
    }
};