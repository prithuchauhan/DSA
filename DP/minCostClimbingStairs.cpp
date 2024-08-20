// https://leetcode.com/problems/min-cost-climbing-stairs/

class Solution {
public:
    int recurse(vector<int> &dp, int ind, vector<int> &cost){
        if (dp[ind] != -1){
            return dp[ind];         // case for matching
        }

        if (ind == 0){
            return cost[0];
        }

        if(ind == 1){
            return cost[1];
        }

        if (ind<0){
            return 0;
        }

        return dp[ind] = cost[ind] + min(recurse(dp,ind-1,cost),recurse(dp,ind-2,cost));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        vector<int> dp(n+1,-1);

        int tot = min(recurse(dp,n-1,cost),recurse(dp,n-2,cost));

        return tot;

    }
};
