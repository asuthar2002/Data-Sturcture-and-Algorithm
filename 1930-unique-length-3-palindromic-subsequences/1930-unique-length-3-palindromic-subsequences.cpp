class Solution {
public:
    int countPalindromicSubsequence(string s) {
        set<char> c;
        int ans = 0;
        for(auto i:s) c.insert(i);
        for(auto it:c) {
            int start = s.find(it);
            int end = s.rfind(it);
            if(start<end){
                set<char> st;
                for(int i=start+1; i<end; i++){
                    st.insert(s[i]);
                }
                ans+=st.size();
            }
        }
        return ans;
    }
};