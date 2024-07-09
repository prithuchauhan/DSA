// QUESTION LINK : https://leetcode.com/problems/longest-increasing-subsequence/


// without dp best solution 


class Solution {
public:

    int lengthOfLIS(vector<int>& nums) {
        
        int cur = 1;
        int ovrmax = 0;

        vector<int> sub;
        sub.push_back(nums[0]);

        for(int i=1;i<nums.size();i++){
            
                auto pos = lower_bound(sub.begin(),sub.end(),nums[i]);
                if (nums[i]<=sub.back()){
                *pos = nums[i];
                }
                else{
                    sub.push_back(nums[i]);
                }
                // for(auto iter : sub){
                //     cout<<iter<<" ";
                // }
                // cout<<endl;
                
            
        }

        return sub.size();

    }
};
