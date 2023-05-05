class Solution {
public:
    int maxVowels(string s, int k) {
        int vovel = 0;
        set<char> c = {'a','e','i','o','u'};
        for(int i=0; i<k; i++){
            if(c.find(s[i])!=c.end())  vovel++;
        }
        int i = 0;
        int j = k;
        int maxi = vovel;
        while(j<s.length()){
            if(c.find(s[j++])!=c.end()){
                vovel++;
            }
            if(c.find(s[i++])!=c.end()){
                vovel--;
            }
            maxi = max(maxi,vovel);
        }
        return maxi;
    }
};