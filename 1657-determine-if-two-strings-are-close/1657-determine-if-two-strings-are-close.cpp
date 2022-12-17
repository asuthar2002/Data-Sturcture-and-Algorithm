class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int> m1, m2;
        string s1, s2;
        vector<int> v1, v2;
        for(int i=0;i< word1.length(); i++)
        {
            m1[word1[i]]++;
        }
        for(int i=0; i<word2.length(); i++)
        {
            m2[word2[i]]++;
        }
        for(auto it:m1){ v1.push_back(it.second);s1+=it.first;}
        for(auto it:m2) {v2.push_back(it.second);s2+=it.first;}
        sort(v1.begin(), v1.end());
        sort(s1.begin(), s1.end());
        sort(v2.begin(), v2.end());
        sort(s2.begin(), s2.end());
        
        return m1.size() == m2.size() and v1 == v2 and s1==s2;
    }
};