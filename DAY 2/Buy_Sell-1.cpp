class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int current=prices[0];
        int sell=0;
        int current_profit=0;
        int profit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<current)
            {
                current=prices[i];
            }
            else
            {
                current_profit=prices[i]-current;
                profit=max(current_profit,profit);
            }
           
        }
        return profit;
    }
};