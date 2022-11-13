class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        stack<string> st;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == ' ' and ans != "")
            {
                st.push(ans);
                ans.clear();
            }
            if(s[i] != ' ') ans+=s[i];
        }
        st.push(ans);
        s.clear();
        while(not st.empty())
        {
            s+=st.top();
            s+=" ";
            st.pop();
        }
        s.pop_back();
        int i=0;
        while(i<s.length() && s[i] ==' ')
        {
            i++;
        }
        return s = s.substr(i, s.length());
    }
};