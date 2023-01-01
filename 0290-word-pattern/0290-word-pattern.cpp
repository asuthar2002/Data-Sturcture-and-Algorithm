class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> m;
        vector<string> st;string ans = "";
        for(int i=0; i<s.length(); i++){
            
            if(s[i]!=' ') ans+=s[i];
            else {st.push_back(ans);ans = "";}
        }
        st.push_back(ans);
        if(pattern.length() != st.size()) return false;
        for(int i=0; i<pattern.length(); i++){
            m[pattern[i]] = st[i];
        }
        unordered_set<string> c;
        for(auto it: m)c.insert(it.second);
        if(m.size() != c.size() ) return false;
        // cout<<m.size();
        for(int i=0; i<pattern.length(); i++){
            if(m[pattern[i]] != st[i]) return false;
        }
        return true;
        
    }
};