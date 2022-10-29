class Solution {
public:
    int code(vector<int>&o,int lane,int p, vector<vector<int>>&dp)
    {
        if(p == o.size()-2) return 0;
        if(dp[p][lane]!=-1) return dp[p][lane];
        if(o[p+1]!=lane)return code(o,lane,p+1,dp);
        if(o[p+1] == lane)
        {
            int l1=0,l2 = 0;
            if(lane == 1) l1 = 2,l2 = 3;
            else if(lane == 2) l1 = 1,l2 = 3;
            else l1 = 1,l2 = 2;
            if(o[p] == l1) return dp[p][lane] = 1+code(o,l2,p+1,dp);
            else if(o[p] == l2) return dp[p][lane] = 1+code(o,l1,p+1,dp);
            else {
                return dp[p][lane] = 1+min(code(o,l1,p+1,dp),code(o,l2,p+1,dp));
            }
        }
        return dp[p][lane] = 0;
    }
    int minSideJumps(vector<int>& o) {
        vector<vector<int>> dp(o.size()+1,vector<int>(4,-1));
        return code(o,2,0,dp);
        
    }
};