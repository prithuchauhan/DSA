// QUESTION LINK : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int profit = INT_MIN;

        for(int i=0;i<prices.size();i++){
            profit = max(profit,prices[i]-buy);
            buy = min(buy,prices[i]);
        }

        return max(profit,0);
    }
};
