class Solution {
public:
    int minCost(string c, vector<int>& n) {
        int ans = 0;
        for(int i=1; i<c.length(); i++)
        {
            if(c[i] == c[i-1]){
                ans+=min(n[i],n[i-1]);
                n[i] = max(n[i],n[i-1]);
            }
            
        }
        return ans;
    }
};