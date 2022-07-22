int maxProfit = 0;
int i=0, j=1;
int sum = 0;
while(j<prices.size())
{
if(prices[i] > prices[j]){
i=j;
j++;
}
else{
maxProfit = max(maxProfit, prices[j] - prices[i]);
j+=1;
}
}
return maxProfit;