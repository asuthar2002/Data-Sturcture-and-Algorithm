class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int n = prices.size();
        int buy = prices[n-1];
        int profit {0};
        for(int i{n-2}; i>=0; i--)
        {
            if(prices[i]<buy){
                profit+=buy-prices[i];
                buy = prices[i];
                continue;
            }
            if(buy<prices[i]) buy = prices[i];
        }
        return profit;
    }
};