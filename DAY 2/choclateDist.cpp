class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int sell=0;
        int currentProfit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]<buy)buy=prices[i];
            else
            {
                sell=prices[i]-buy;
                currentProfit+=sell;
                buy=prices[i];
              
            }
        }
        return currentProfit;
    }
};