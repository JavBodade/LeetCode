class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minstock=prices[0];
        int profit=0;
        
        for(int i=0;i<prices.size();i++)
        {
            minstock=min(minstock,prices[i]);
            profit=max(prices[i]-minstock,profit);
        }
        
        return profit;
        
    }
};