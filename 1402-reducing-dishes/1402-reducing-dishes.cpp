class Solution {
public:
    int code(vector<int> &s,int i,int time,vector<vector<int>>&dp){
        if(i>=s.size()) return 0;
        if(dp[i][time] != -1) return dp[i][time];
        return dp[i][time] = max(s[i]*(time+1) + code(s,i+1,time+1,dp), code(s,i+1,time,dp));
    }
    int maxSatisfaction(vector<int>& s) {
        vector<vector<int>> dp(s.size()+1, vector<int>(s.size()+1,-1));
        sort(s.begin(),s.end());
        return code(s,0,0,dp);
    }
};