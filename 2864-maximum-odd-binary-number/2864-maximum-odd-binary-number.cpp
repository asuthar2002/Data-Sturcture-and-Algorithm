class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt  =0;
        for(auto it:s)if(it=='1')cnt++;
        int i=0; 
        cnt-=1;
        while(i<s.length()){
            if(cnt){
                s[i] = '1';
                cnt--;
            }
            else s[i] = '0';
            i++;
        }
        s[s.length()-1] = '1';
        return s;
    }
};