class Solution {
public:
    string oddString(vector<string>& words) {
        map<vector<int>,vector<string>> m;
        for(int i=0; i<words.size(); i++)
        {
            vector<int> v;
            for(int j=0; j<words[0].size()-1; j++)
            {
                v.push_back(words[i][j+1] - words[i][j]);
            }
            m[v].push_back(words[i]);
        }
        for(auto it: m)
        {
            if(it.second.size() == 1) return it.second[0];
        }
        return "";
    }
};