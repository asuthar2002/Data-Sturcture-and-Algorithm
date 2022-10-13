class Solution {
public:
    int subtractProductAndSum(int n) {
        vector<int> ans;
        while(n!=0)
        {
            ans.push_back(n%10);
            n = n/10;
        }
        int p = 1;
        int s = 0;
        for(auto it: ans)
        {
            p*=it;
            s+=it;
        }
        return p-s;
    }
};