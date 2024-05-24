// KADANE'S algo for maximum sum of subarray.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<bits/stdc++.h>
#include<array>
#include<vector>
#include<string.h>
#include<cmath>
using namespace std;
using lli = long long;

// QUESTION LINK : https://leetcode.com/problems/maximum-subarray/description/


int maxSubArray(vector<int>& nums) {

    int maxSum = INT_MIN;
    int sum = 0;
        
    for(int i=0;i<nums.size();i++){

        sum  = max(nums[i],sum+nums[i]);
        maxSum = max(sum,maxSum);
            
        

    }
    return maxSum;
    
}
    

int main(){

    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    cout<< maxSubArray(nums)<<endl;

    

    return 0;

}