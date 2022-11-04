class Solution {
public:
    string reverseVowels(string s) {
        vector<char> v = {'a','e','i','o','u','A','E','I','O','U'};
        
        unordered_set<char> l;  // this stores all lower case vovel
        for(int i=0;i<10; i++)l.insert(v[i]);
        
        int j= s.length()-1;
        int i = 0;
        while(i<=j)
        {
            if(l.find(s[i])!=l.end() && l.find(s[j])!= l.end())
                swap(s[i++],s[j--]);
            else if(l.find(s[i]) != l.end() && l.find(s[j]) == l.end())
                j--;
            else if(l.find(s[i]) == l.end() && l.find(s[j]) != l.end())
                i++;
            else i++,j--;
        }
        return s;
            
    }
};