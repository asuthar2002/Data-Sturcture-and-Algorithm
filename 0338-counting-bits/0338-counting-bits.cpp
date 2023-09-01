class Solution {
public:
    int code(int n){
        return bitset < 32 > (n).count();
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<=n; i++){
            ans.push_back(code(i));
        }
        return ans;
    }
};