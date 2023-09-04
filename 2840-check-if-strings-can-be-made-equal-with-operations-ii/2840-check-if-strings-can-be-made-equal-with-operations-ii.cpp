class Solution {
public:
    bool checkStrings(string s1, string s2) {
        unordered_map<char,int> m;
        for(int i=0; i<s1.length(); i++){
            m[s1[i]]++;
            i++;
        }
        for(int i=0; i<s2.length(); i++){
            if(m.find(s2[i])!=m.end()){
                m[s2[i]]--;
                if(m[s2[i]]==0)m.erase(s2[i]);
            }
            else {
                return false;
            }
            i++;
        }
        // for(auto it:m) cout<<it.first<<" ";
        if(m.size()>0) return false;
        m.clear();
        for(int i=1; i<s1.length(); i++){
            m[s1[i]]++;
            i++;
        }
        for(int i=1; i<s2.length(); i++){
            if(m.find(s2[i])!=m.end()){
                m[s2[i]]--;
                
                if(m[s2[i]]==0)m.erase(s2[i]);
            }
            else {
                return false;
            }
            i++;
        }
        if(m.size()>0) return false;
        return true;
    }
};