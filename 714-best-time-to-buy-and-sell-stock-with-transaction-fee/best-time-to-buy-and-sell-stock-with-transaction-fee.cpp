class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int profit=0;
        int minprices=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]<minprices){
                minprices=prices[i];
            }
             else if (prices[i] > minprices + fee) {
                profit += prices[i] - minprices - fee;

                // Pretend we bought again at today's price
                minprices = prices[i] - fee;
            }
        }
        return profit;
    }
};