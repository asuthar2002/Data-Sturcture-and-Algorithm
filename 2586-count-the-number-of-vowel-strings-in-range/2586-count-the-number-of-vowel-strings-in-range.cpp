class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        set<char> s = {'a','e','i','o','u'};
        int cnt = 0;
        for(int i=left; i<=right;i++){
            string st  = words[i];
            if(s.find(words[i][0]) != s.end() and s.find(words[i][words[i].length()-1])!= s.end()) cnt++;
        }
        return cnt;
    }
};