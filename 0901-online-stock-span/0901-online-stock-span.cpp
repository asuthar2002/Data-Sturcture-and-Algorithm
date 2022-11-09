class StockSpanner {
public:
    vector<int> v;
    stack<int> s;
    int i=0;
    StockSpanner() {
        
    }
    
    int next(int price) {
        v.push_back(price);
        int ans;
        while(!s.empty() && price>=v[s.top()]){
             s.pop();
        }
        
        if(s.empty()){
            ans = i+1;
        }
        else ans = i-s.top();
      
        s.push(i++);
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */