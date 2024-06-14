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

// QUESTION LINK : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

// int findMin(vector<int>& nums) 
//     {       
//             int low = 0;
//             int high = nums.size()-1;
//             int mid = -1;
            
//             while (low<high){
//                 int mid = (low+high)/2;


//                 if (nums[mid]>nums[low]){
//                     if (nums[low]>nums[high]){
//                         mid = low+1;
//                     }
//                     else{
//                         high = mid;
//                     }
//                 }
//                 else {
//                     if (nums[mid] > nums[low]){
//                         high = mid-1;
//                     }
//                     else{
//                         low = mid;
//                     }
//                 }
//             }

//             return nums[mid];


//     }

int findMin(vector<int>& nums) 
{
    int low = 0;
    int high = nums.size() - 1;

    while (low < high) {
        int mid = (low+high) / 2;

        if (nums[mid]>nums[high]){
            low = mid+1;
        }
        else{
            high = mid;
        }
        
    }

    return nums[low];
}


int main(){

    vector<int> nums = {5,11,15,0,2};

    cout<<findMin(nums)<<endl;
    

    return 0;

}
