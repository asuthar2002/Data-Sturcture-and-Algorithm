class Solution {
public:
    string capitalizeTitle(string title) {
        vector<string> s;
        string ans = "";
        for(auto it: title){
            if(it == ' '){
                s.push_back(ans);
                ans = "";
            }
            else ans += it;
        }
        s.push_back(ans);
        
        string t = "";
        for(auto it: s){
            string tt = "";
            if(it.length()<=2){
                for(auto i:it) tt+=tolower(i);
            }
            else{
                for(auto i: it){
                    tt+=tolower(i);
                    tt[0] = toupper(tt[0]);
                }
            }
            t+=tt;
            t+=' ';
        }
        t.pop_back();
        return t;
    }
};