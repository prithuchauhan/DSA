// QUESTION LINK : https://leetcode.com/problems/longest-increasing-subsequence/


class Solution {
public:


    int recursion(int ind,int prev, int n, vector<int> &nums){
        if (ind == n){
            return 0;

        }

        // not take

        int len = 0 + recursion(ind+1,prev,n,nums);

        // take

        if (prev == -1 || nums[prev]<nums[ind]){
            len = max(len, 1 + recursion(ind+1,ind,n,nums));
        }

        return len;
    }

    int lengthOfLIS(vector<int>& nums) {


        int n = nums.size();
        return recursion(0,-1,n,nums);

    }    
        
        
};
