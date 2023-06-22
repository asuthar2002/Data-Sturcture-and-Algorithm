class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int profit = 0;
        int buy = prices[0];
        for(int i=1; i<prices.size(); i++)
        {
            profit = max(profit,prices[i]-buy-fee);
            buy = min(buy,prices[i]-profit);
        }
        return profit;
    }
};