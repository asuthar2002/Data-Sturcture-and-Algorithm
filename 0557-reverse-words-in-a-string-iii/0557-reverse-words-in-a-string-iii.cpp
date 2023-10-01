class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string result = "";
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == ' ')
        {
            reverse(result.begin(), result.end());
            ans+=result;
            ans+=" ";
            i++;
            result = "";
        }
        result+=s[i];
    }
        reverse(result.begin(), result.end());
            ans+=result;
        return ans;
    }
};