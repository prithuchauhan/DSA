// QUESTION LINK : https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // without division 

        int n = nums.size();

        vector<int> prefix;
        vector<int> suffix(n);

        vector<int>ans;

        

        int start = 1;

        for(int i=0;i<n;i++){
            prefix.push_back(start*nums[i]);
            start = start*nums[i];
        }

        start = 1;

        for(int i=n-1;i>=0;i--){
            suffix[i] = start*nums[i];
            start *= nums[i];
        }

        for(auto iter : prefix){
            cout<<iter<<" ";
        }

        cout<<endl;

        for(auto iter : suffix){
            cout<<iter<<" ";
        }

        for(int i=0;i<n;i++){
            if (i == 0){
                ans.push_back(suffix[i+1]);
            }
            else if (i==n-1){
                ans.push_back(prefix[i-1]);

            }

            else{
                ans.push_back(prefix[i-1]*suffix[i+1]);
            }
        }

        return ans;
    }
};
