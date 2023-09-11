class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int> > map ;
        for(int i=0; i<groupSizes.size(); i++){
            map[groupSizes[i]].push_back(i);
        }
        vector<vector<int>> ans;
        for(auto it:map){
            int size = it.first;
            vector<int> res;
            int i=0;
            while(i<it.second.size()){
                res.push_back(it.second[i]);
                if(res.size()==size){
                    ans.push_back(res);
                    res.clear();
                }
                i++;
            }
        }
        return ans;
    }
};