class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> ans;
        for(int it=0; it<words.size(); it++){
            string s = "";
            string c = words[it];
            for(int i=0; i<c.length(); i++){
                // cout<<c[i];
                if(c[i] == separator and s.length() == 0) continue;
                else {
                    if(c[i] == separator and !s.empty()){
                        ans.push_back(s);
                        s.clear();
                    }
                    else s+=c[i];
                }
            }
            if(!s.empty()){
                ans.push_back(s);
                s.clear();
            }
            // cout<<" - ";
        }
        return ans;
    }
};