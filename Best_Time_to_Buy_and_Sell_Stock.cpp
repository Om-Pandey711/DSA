//Platform - LeetCode Q.121
//You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int Bestbuy = prices[0];

for(int i=0;i<prices.size();i++){
    if(prices[i]>Bestbuy){
        maxProfit = max(maxProfit,prices[i]-Bestbuy);
    }
    Bestbuy=min(Bestbuy,prices[i]);
}
return maxProfit;
    }
};
