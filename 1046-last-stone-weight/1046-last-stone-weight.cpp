class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(auto it:stones)q.push(it);
        while( q.size()>1){
            int a = q.top();
            q.pop();
            int b= q.top(); q.pop();
            if(a==b) continue;
            else {
                q.push(max(a,b)-min(a,b));
            }
            if(q.size() ==1)break;
        }
        if(q.size() ==1) return q.top();
        return 0;
    }
};