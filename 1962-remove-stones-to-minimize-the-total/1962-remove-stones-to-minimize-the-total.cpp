class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> q;
        for(auto it: piles)q.push(it);
        while(k--)
        {
            int i=q.top();
            q.pop();
            if(i%2==0) q.push(i/2);
            else q.push((i+1)/2);
        }
        int sum = 0;
        while(!q.empty()){
            sum+=q.top();
            q.pop();
        }
        return sum;
    }
};