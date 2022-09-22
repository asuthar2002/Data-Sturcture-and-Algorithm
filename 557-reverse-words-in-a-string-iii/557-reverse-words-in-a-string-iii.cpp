class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string a = "";
        for(int i=0; i<s.length(); i++)
        {
            
            if(s[i] == ' ')
            {
                reverse(a.begin(), a.end());
                ans+=a;
                ans+=" "; i++;
                a = "";
            }
            
            a+=s[i];
        }
        reverse(a.begin(), a.end());
                ans+=a;
                a = "";
        return ans;
    }
};