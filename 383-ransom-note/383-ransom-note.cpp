class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char,int> mp;
        for(int i=0; i<m.length(); i++)
        {
            mp[m[i]]++;
        }
        for(int i=0; i<r.length(); i++)
        {
            auto it = mp.find(r[i]);
            if(it != mp.end()){
                it->second--;
                if(it->second == 0) mp.erase(it);
            }
            else if(it == mp.end()  )return false;
        }
        return true;
    }
};