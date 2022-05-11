class Solution {
public:
    int longestPalindrome(string s) {
        int cnt =0;
        unordered_map<char,int> m;
        for(int i=0; i<s.size(); i++)
        {
            if(++m[s[i]] %2==0)
            {
                cnt += 2;
            }
        }
        
            if(cnt<s.size())
                cnt++;
        return cnt;
    }
};