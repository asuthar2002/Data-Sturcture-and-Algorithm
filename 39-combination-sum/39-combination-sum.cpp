class Solution {
public:
    void code(vector<int> c,int t,vector<vector<int>>&ans, vector<int>&res,int i)
    {
        if(i==c.size())
        {
            if(t==0)
            {
                ans.push_back(res);
            }
            return ;
        }
        if(t>=c[i])
        {
            res.push_back(c[i]);
            code(c,t-c[i],ans,res,i);
            res.pop_back(); 
        }
        code(c,t,ans,res,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>> ans;
        vector<int> res;
        code(c,t,ans,res,0);
        return ans;
    }
};