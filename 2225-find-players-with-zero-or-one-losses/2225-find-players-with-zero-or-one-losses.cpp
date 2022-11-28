class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int> win, loose;
        for(int i=0; i<matches.size(); i++){
            win[matches[i][0]]++;
            loose[matches[i][1]]++;
        }
        vector<int> res2;
        for(auto it: loose) {
            if(it.second == 1)res2.push_back(it.first); 
        }
        sort(res2.begin(), res2.end());
        vector<int> res;
        for(auto it: win)
        {
            if(loose.count(it.first))continue;
            else res.push_back(it.first);
        }
        sort(res.begin(), res.end());
        
        return {res,res2};
    }
};