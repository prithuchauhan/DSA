// QUESTION LINK : https://leetcode.com/problems/house-robber-ii/description/

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

        if (n == 1){
            return nums[0];
        }

        vector<int> dp(n,-1);

        int left = solve(dp,n-2,nums);

        for(int i=0;i<dp.size();i++){
            dp[i] = -1;
        }

        for(int i=0;i<n-1;i++){
            nums[i] = nums[i+1];
        }


        int right = solve(dp,n-2,nums);

        return max(left,right);
        
    }
};
