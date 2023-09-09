class Solution {
public:
    int code(vector<int>&n,int t,int i)
    {
        if(t==0) return 1;
        if(t<0) return 0;
        int cnt = 0;
        for(int i=0;i<n.size(); i++)
        {
            cnt+=code(n,t-n[i],i);
        }
        return cnt;
    }
    
    int mem(vector<int> &n,int t,vector<int> &dp)
    {
        if(t==0) return 1;
        if(t<0) return 0;
        if(dp[t]!= -1) return dp[t];
        int sum = 0;
        for(int i=0; i<n.size(); i++)
        {
            sum+=mem(n,t-n[i],dp);
        }
        return dp[t] = sum;
    }
    int combinationSum4(vector<int>& nums, int target) {
        // using simple recursion ;
        // return code(nums,target,0); 
        
        // memoization 
        vector<int> dp(target+1,-1);
        return mem(nums,target,dp);
        
       return dp[target];
    }
};