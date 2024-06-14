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

// QUESTION LINK : https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/

bool search(vector<int>& nums, int target) 
    {
        int low = 0;
        int high = nums.size()-1;

        while (low<=high){

            int mid = (low+high)/2;
            if (nums[mid] == target) return true;
            else if (nums[mid] > nums[low]){
                if (nums[mid]>target && nums[low]<=target){
                    high = mid-1;
                }
                else{
                    low = mid;
                }
            } 
            else if (nums[mid] < nums[high]){
                if (target <= nums[high] && target > nums[mid]){
                    low = mid+1;
                }
                else{
                    high = mid;
                }
            }
            else if (nums[low] == nums[mid]){
                low ++ ;
            }
            else if (nums[high] == nums[mid]){
                high--;
            }
        }

        return false;    
    }

int main(){

    vector<int> nums = {3,4,5,6,7,1,2};
    int target = 8;

    cout<<search(nums,target)<<endl;
    

    return 0;

}