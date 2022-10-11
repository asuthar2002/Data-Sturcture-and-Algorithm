class Solution {
public:
    void code(vector<int>&c, int t,vector<vector<int>>&ans,vector<int>&res,int i)
    {
        if(t == 0) {
            ans.push_back(res);
            return ;
        }
        if(i==c.size() || t-c[i]<0) return ;
        
        res.push_back(c[i]);
        code(c,t-c[i],ans,res,i+1);
        res.pop_back();
        
        while(i+1<c.size() && c[i] == c[i+1]) i++;
            
        code(c,t,ans,res,i+1);
    }


    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
         vector<vector<int>> ans;
        vector<int> res;
        sort(c.begin(),c.end());
        code(c,t,ans,res,0);
        return ans;
    }
};