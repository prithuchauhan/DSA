// QUESTION LINK : https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        

        int n = nums.size();
        int f = 1;

        for(int i=2;i<=n;i++){
            f ^= i;
        }

        int k = nums[0];
        
        for(int i=1;i<n;i++){
            k ^= nums[i];
        }
        
        return k^f;
        
    }
};
