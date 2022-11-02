class Solution {
public:
    bool matchReplacement(string s, string sub, vector<vector<char>>& mp) {
        unordered_map<char,unordered_set<char>>m;
        for(int i=0; i<mp.size(); i++){
            m[mp[i][0]].insert(mp[i][1]);
        }
        int n = s.length();
        int k = sub.length();
        for(int i=0; i<=n-k; i++)
        {
            bool flag = 0;
            for(int j=0; j<k; j++)
            {
                char x = s[i+j], y = sub[j];
                if(x==y || m[y].find(x) != m[y].end()) continue;
                else {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)return true;
        }
        return false;
    }
};