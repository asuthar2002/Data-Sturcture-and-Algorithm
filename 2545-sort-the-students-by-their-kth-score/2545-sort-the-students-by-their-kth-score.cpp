class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int r = score.size();
        int c = score[0].size();
        vector< vector<int>>ans(r,vector<int>(c,0));
        vector<int> res;
        for(auto it:score){
            res.push_back(it[k]);
        }
        unordered_map<int,int> m;
        for(int i=0; i<r; i++){
            m[res[i]] = i;
        }
        sort(res.begin(), res.end());
        reverse(res.begin(), res.end());
        for (int i=0; i<r; i++){
            ans[i] = score[m[res[i]]];
        }
        return ans;
    }
};