// Problem Link : https://leetcode.com/problems/trapping-rain-water/

class Solution {
public:
    int trap(vector<int>& height) {
        
        int leftstart = 0;
        int rightstart = height.size()-1;

        int n = height.size();

        vector<int> lefthighest(n);
        vector<int> righthighest(n);
        
        int highest = 0;

        for(int i=0;i<=rightstart;i++){
            if (height[i]>highest){
                highest = height[i];

            }

            lefthighest[i] = highest;
        }

        highest = 0;

        for(int i=rightstart;i>=0;i--){
            if (height[i]>highest){
                highest = height[i];

            }

            righthighest[i] = highest;
        }

        int ans = 0;

        for(int i=0;i<rightstart;i++){
            int mini = min(lefthighest[i],righthighest[i]);

            int k = mini-height[i];
            if (k > 0){
                ans += k;
            }
        }

        return ans;


    }
};
