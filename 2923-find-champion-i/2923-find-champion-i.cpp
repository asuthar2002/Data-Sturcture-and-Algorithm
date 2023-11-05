class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        vector<int> ans;
        for(auto it:grid){
            int ocnt = 0;
            int icnt = 0;
            for(auto i:it){
                if(i==0) ocnt++;
                else icnt++;
            }
            ans.push_back(icnt);
        }
        // for(auto it:ans)cout<<it<<" ";
        int res = -1;
        int maxi = -1;
        for(int i=0; i<ans.size(); i++){
            if(ans[i]>maxi) {
                maxi = ans[i];
                res = i;
            }
        }
        return res;
    }
};