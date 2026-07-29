class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy=0,sell=1,profit=0;
        while(sell!=prices.size())
        {
            if(prices[sell]<prices[buy])
                buy=sell;
            else{
                if(profit<(prices[sell]-prices[buy]))
                    profit=prices[sell]-prices[buy];
            }
            sell++;
        }
        return profit;
    }
};