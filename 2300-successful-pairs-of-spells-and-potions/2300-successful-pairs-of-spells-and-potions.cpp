class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        // vector<int> ans;
        // for(int i=0 ;i<spells.size(); i++){
        //     int cnt = 0;
        //     for(int j=0; j<potions.size(); j++){
        //         if(spells[i]*potions[j]>=success) cnt++;
        //     }
        //     ans.push_back(cnt);
        // }
        // return ans;
         vector<int> ans;
        sort(potions.begin(), potions.end());
    ans.reserve(spells.size());
    for(int i=0; i<spells.size(); ++i) {
        int j = lower_bound(potions.begin(), potions.end(), (success + spells[i] - 1) / spells[i]) - potions.begin();
        ans.push_back(potions.size() - j);
    }
    return ans;
    }
};