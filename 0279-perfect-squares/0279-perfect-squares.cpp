class Solution {
public:
    int code(int n, vector<int> &ans){
        if(n==0 ) return 0;
        if(n<0) return 0;
        int res = n;
        if(ans[n] != -1) return ans[n];
        for(int i=1; i<=sqrt(n); i++)
        {
            res = min(res, code(n-(i*i),ans)+1 );
        }
        return ans[n] = res;
    }
    int numSquares(int n) {
        vector<int> ans(n+1,-1);
        return code(n,ans);
    }
};