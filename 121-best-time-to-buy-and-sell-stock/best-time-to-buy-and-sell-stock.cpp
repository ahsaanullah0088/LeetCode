class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyprice = prices[0];
        int profit =0;
        for( int i=1; i<prices.size();i++){
            if(prices[i] < buyprice ){
                buyprice = prices[i];
            }else{
                int cp = prices[i] - buyprice;
                profit = max(profit , cp);
            }
        }
        return profit;
    }
};