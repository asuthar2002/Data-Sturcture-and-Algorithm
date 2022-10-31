class Solution {
public:
    int code(vector<int>&s, int i,int t,vector<vector<int>>&dp)
    {
        if(i==s.size() ) return 0;
        if(dp[i][t]!= -1) return dp[i][t];
        return dp[i][t] =  max(s[i]*(t+1)+code(s,i+1,t+1,dp), code(s,i+1,t,dp));
    }
    int maxSatisfaction(vector<int>& s) {
        sort(s.begin(),s.end());
        vector<vector<int>>dp(s.size()+1,vector<int>(s.size()+1,-1));
        return code(s,0,0,dp);
    }
};