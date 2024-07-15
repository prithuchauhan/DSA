// QUESTION LINK : https://leetcode.com/problems/house-robber/

class Solution {
public:

    int solve(vector<int> &dp, int ind, vector<int> &nums){
        if (ind<0){
            return 0;
        }

        if (dp[ind] != -1){
            return dp[ind];
        }

        return dp[ind] = max(solve(dp,ind-2,nums)+nums[ind], solve(dp,ind-1,nums));
    }
    int rob(vector<int>& nums) {

        int n = nums.size();

        vector<int> dp(n,-1);
        dp[0] = nums[0];
        return solve(dp,n-1,nums);


        
    }
};
