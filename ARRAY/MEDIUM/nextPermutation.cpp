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

// QUESTION LINK : https://leetcode.com/problems/next-permutation/

// there exists a built in function in cpp. 
//next_permutation();

void nextPermutation(vector<int>& nums)            // got accepted with a high time complexity   // cause we r sorting hence nlogn we can just reverse it would be slightly lower O(n).
    {   int minimum = INT_MAX;
        bool decrease = true;
        int indexswap = 0;
        for(int i=nums.size()-1;i>=1;i--){
            if(nums[i]>nums[i-1]){
                for(int j=i;j<nums.size();j++){
                    if(nums[j]<minimum && nums[j]>nums[i-1]){           // nums[j]>nums[i-1] is very important.
                        indexswap = j;
                        minimum = nums[j];
                    }
                    
                }
                swap(nums[i-1],nums[indexswap]);
                sort(nums.begin()+i,nums.end());        // or just reverse the array from that point onwards because it already is in decreasing order. O(n) solution. 
                decrease = false;
                break;
            }
        }

        if (decrease){
            int low = 0;
            int high = nums.size()-1;
            while (low<high){
                swap(nums[low],nums[high]);
                low++;
                high--;
            }

        }


    }



int main(){

    vector<int> nums = {1,3,2};
    // nextPermutation(nums);

    // for(int i=0;i<nums.size();i++) cout<<nums[i]<<" ";

    // cout<<endl;

    next_permutation(nums.begin(),nums.end());    

    for(int i=0;i<nums.size();i++) cout<<nums[i]<<" ";



    return 0;

}