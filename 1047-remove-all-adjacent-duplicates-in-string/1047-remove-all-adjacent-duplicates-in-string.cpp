class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i=0; i<s.length(); i++)
        {
            if(st.empty()|| s[i]!=st.top()) st.push(s[i]);
            else if(s[i] == st.top()) st.pop();
        }
        s.clear();
        while(not st.empty()){
            s+=st.top();
            st.pop();
        }
        reverse(s.begin(), s.end());
        return s;
    }
};