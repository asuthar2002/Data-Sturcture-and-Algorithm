class Solution {
public:
    int code(vector<int> &d, vector<int> &c, int i, vector<int> &dp)
    {
        if(i>=d.size()) return 0;
        
        if(dp[i] != -1) return dp[i];
        
        int o1 = c[0]+code(d,c,i+1,dp);
        
        int j;
        for(j=i; j<d.size()&& d[j]<d[i]+7; j++);
        int o2 = c[1]+ code(d,c,j,dp);
        
        for(j=i; j<d.size() && d[j]<d[i]+30; j++ );
        int o3 = c[2]+code(d,c,j,dp);
        
        return dp[i] = min(o1, min(o2,o3));
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(days.size()+1,-1);
        return code(days,costs,0, dp);
    }
};