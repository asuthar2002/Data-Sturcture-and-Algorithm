class Solution {
public:
    int maximum69Number (int num) {
         vector<int> ans;
        int x = num ;
        while(x>0){
            ans.push_back(x%10);
            x = x/10;
        }
        reverse(ans.begin(),ans.end());
        for(int i=0; i<ans.size(); i++){
            if(ans[i] == 6){
                ans[i] = 9;
                break;
            }
        }
        x= 0;
        for(auto it: ans) x = x*10+it;
        return x;
    }
};