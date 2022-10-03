#define v  vector<int> 
class Solution {
public:
    bool equalFrequency(string word) {
        v ans(26);
        for(auto i: word) ans[i-'a']++;// stored all the frequency of elements 
        for(int i=0; i<26; i++)
        {
            // if the element was into the word then we will decrerase that frequency ;
            if(ans[i])
            {
                ans[i]--;
                bool chk = true;
                int maxi = *max_element(ans.begin(),ans.end());
                for(int j=0; j<26;j++)
                {
                    if(ans[j] && ans[j] != maxi) chk = false;
                }
                if(chk) return true;
                ans[i]++;
            }
        }
        return false;
        
    }
};