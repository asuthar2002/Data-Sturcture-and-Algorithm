class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.length() ==1) return true;
        int l = 0, u = 0;
        for(auto it: word){
            char ch = it;
            if(ch-'a' < 0)u++;
            else l++;
        }
        if(u==word.length()) return true;
        if(word[0]-'a'<0 and l==word.length()-1 || l==word.length() ) return true;
        return false;
    }
};