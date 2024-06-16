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

// QUESTION LINK : https://leetcode.com/problems/single-element-in-a-sorted-array/

// O(n) solution 

// int singleNonDuplicate(vector<int>& nums) {
//         int sum = 0;

//         int i=0;
//         int n = nums.size();
        
//         while(i<n-1){
//             sum += nums[i];
//             i++;
//             sum -= nums[i];
//             i++;
//         }

//         sum += nums[i];

//         return sum;
        
//     }

// o(log n) : approach is that ki left side agr nums[i] == nums[i+1] hai to i even hoga and right side hai to i = odd hoga


// int singleNonDuplicate(vector<int>& nums) {
//         int left = 0, right = nums.size() - 1;
//         while (left < right) {
//             int mid = (left + right) / 2;
//             if (mid % 2 == 1) {
//                 mid--;
//             }                                     // always ensure that array is of odd length.
//             if (nums[mid] != nums[mid + 1]) {     // mid is either single element or its first element of pair is odd.
//                 right = mid;
//             } else {
//                 left = mid + 2;                   // mid = mid + 2;
//             }
//         }
//         return nums[left];
//     }


// can it be easier just skip two steps  ?? 


int singleNonDuplicate(vector<int>& nums)

    {
        int l = 0;
        int h = nums.size()-1;
        int n = nums.size();
        while(l<h){
            if (l+1 < n && nums[l] == nums[l+1]){
                l += 2;
            }
            else{
                return nums[l];
            }

            if (h-1 > 0 && nums[h] == nums[h-1]){
                h -= 2;
            }
            else{
                return nums[h];
            }
        }

        return nums[n/2];           // if the element is in between 
    }


int main(){

    vector<int> nums = {1,1,2,3,3,4,4,8,8};

    cout<<singleNonDuplicate(nums)<<endl;
    

    return 0;

}