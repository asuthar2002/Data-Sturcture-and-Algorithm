#include<bits/stdc++.h>
class Solution {
public:
    bool isValidSerialization(string preorder) {
        stringstream ss(preorder);
        string s;
        int cnt = 1;
        while(getline(ss,s,','))
        {
            cnt--;
            if(cnt<0)return false;
            
            if (s != "#") cnt += 2;
            
        }
        return cnt==0;
    }
};