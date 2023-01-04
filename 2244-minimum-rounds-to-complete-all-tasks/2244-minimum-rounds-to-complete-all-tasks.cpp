class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        unordered_map<int,int> m1;
         sort(tasks.begin(),tasks.end());
        for(auto it:tasks)m1[it]++;
        int sum=0;
        for(auto it:m1){
            if(it.second==1)return -1;
            if(it.second%3==0)sum+=it.second/3;
            else sum+=it.second/3+1;
        }

        return sum;
        
    }
};