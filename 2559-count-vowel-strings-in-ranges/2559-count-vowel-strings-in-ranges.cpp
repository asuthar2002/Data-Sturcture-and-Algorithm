class Solution {
public:
    vector<int> vowelStrings(vector<string>& ws, vector<vector<int>>& queries) {
        unordered_set<char> vw({'a', 'e', 'i', 'o', 'u'});
        vector<int> ps(1), res;
        for (const auto &w : ws)
            ps.push_back(vw.count(w.front()) && vw.count(w.back()));
        partial_sum(begin(ps), end(ps), begin(ps));
        for (const auto &q : queries){
            res.push_back(ps[q[1] + 1] - ps[q[0]]);
        }
        return res;
    }
};