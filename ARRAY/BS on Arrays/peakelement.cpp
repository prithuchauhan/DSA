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

// QUESTION LINK : https://leetcode.com/problems/find-peak-element/

int findPeakElement(vector<int>& nums) 
    {
        int n = nums.size();

        if (n==2){
            return (nums[0]>nums[1]) ? 0 : 1;

        }
        else if (n == 1){
            return 0;
        }

        else {
            int low = 0;
            int high = n-1;

            while(low<=high){
                int mid = low + (high-low)/2;
                if (mid != 0 && mid!=n-1){
                    if (nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                        return mid;
                    }
                    else{
                        if (nums[mid-1] > nums[mid+1]){
                            high = mid-1;
                        }
                        else{
                            low = mid+1;
                            
                        }
                    }
                }
                else{
                    return (nums[low]>=nums[high]) ? low:high;
                }
            }   

            

            return -1;
        

          
        }
    }

int main(){

    vector<int> nums = {3,4,3,2,1};

    cout<<findPeakElement(nums)<<endl;
    

    return 0;

}