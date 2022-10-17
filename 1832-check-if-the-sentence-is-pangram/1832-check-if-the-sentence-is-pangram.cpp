class Solution {
public:
    bool checkIfPangram(string s) {
        if(s.length()<26)  return false;
        vector<int> ans(26,0);
        for(int i=0; i<s.length(); i++) ans[s[i]-'a']++;
        sort(ans.begin(), ans.end());
        if(ans[0]==0) return false;
        return true;
    }
};