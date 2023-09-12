class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>map;
        for(auto it:s)map[it]++;
        vector<int> ans;
        for(auto it: map)ans.push_back(it.second);
        sort(ans.begin(), ans.end());
        for(int i=ans.size()-1; i>=0; i--)cout<<ans[i]<<" ";
        cout<<endl;
        int cnt = 0;
        for(int i=ans.size()-2; i>=0; --i){
            if(ans[i] == 0) break;
            if(ans[i]>=ans[i+1]){
                cout<<ans[i]<<' ';
                int prev = ans[i];
                ans[i] = max(0, ans[i+1]-1);
                cnt += prev-ans[i];
            }
        }
        return cnt;
    }
};