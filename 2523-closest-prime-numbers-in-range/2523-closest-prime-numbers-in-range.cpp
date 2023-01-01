class Solution {
public:
    void code(vector<bool > &ans, int n)
    {
        ans[1]= true;
        for(int i=2 ; i*i<=n; i++){
            if(ans[i]){
                for(int j=i+i; j<=n; j+=i){
                    ans[j] = false;
                }
            }
        }
    }
    vector<int> closestPrimes(int left, int right) {
        vector<bool> ans(right+1, 1);
        code(ans, right);
        ans[0] = 0;
        ans[1] = 0;
        int diff = INT_MAX;
        int lans = -1, rans = -1;
        vector<int> res;
        for(int i=left; i<=right; i++)
        {
            if(ans[i]) res.push_back(i);
        }
        sort(res.begin(), res.end());
        for(int i=res.size()-1; i>0 ; i--)
        {
            int l = res[i];
            int r = res[i-1];
            if(diff>=l-r){
                diff = l-r;
                lans = res[i];
                rans = res[i-1];
            }
        }
        vector<int>v ={lans, rans};
        sort(v.begin(), v.end());
        return v;
    }
};