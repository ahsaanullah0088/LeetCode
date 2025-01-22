class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyprice = prices[0];
        int profit =0;
        for( int i=0;i<prices.size(); i++){
            if(prices[i]<buyprice){
                buyprice = prices[i];
            }else{
                int currentprofit = prices[i] - buyprice;
                profit = max(profit , currentprofit);
            }
        }
        return profit;
    }
};