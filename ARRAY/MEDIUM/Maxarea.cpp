// QUESTION link : https://leetcode.com/problems/container-with-most-water/description/

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i = 0;
        int n = height.size();
        int j = n-1;

        int maxarea = 0;
        int cur = 0;

        while(i<=j){

            cur = min(height[i],height[j])*(j-i);
            maxarea = max(maxarea,cur);

            if (height[i] == min(height[i],height[j])){
                i++;
            }
            else{
                j--;
            }
        }

        return maxarea;
    }
};
