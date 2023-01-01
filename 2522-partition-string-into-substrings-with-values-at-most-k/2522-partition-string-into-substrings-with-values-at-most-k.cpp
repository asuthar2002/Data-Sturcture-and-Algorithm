class Solution {
public:
    int minimumPartition(string s, int k) {
        long long int ans = 0;
        int cnt = 0;
        for(int i=0; i<s.length(); i++) {
            char ch = s[i];
            int a = ch-'0';
            if(a>k) return -1;
            ans = ans*10;
            ans= ans+a;
            if(ans>k){
                cnt++;
                ans = a;
            }
        }
        if(ans>0) cnt++;
        return cnt;
    }
};