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

// QUESTION LINK : https://leetcode.com/problems/sort-colors/description/?source=submission-ac

void sortColors(vector<int>& nums) {              // using maps lol

    map<int,int> hashmap;

    for(int i=0;i<nums.size();i++){
        hashmap[nums[i]]++;
    }

    nums.clear();

    for(auto iter : hashmap){
        for(int i=0;i<iter.second;i++){
            nums.push_back(iter.first);
        }
    }

    
        
    }

void sortColorsFaster(vector<int> &nums){                  // think of a thought provoking way probably swapping but how ??
    // IDEA : three pointers - 0 to low : all zeros
    // low to mid : all 1s
    // mid to high : unsorted iterator runs here
    // high to end : all 2s 
    // this is the overall idea.

    int low = 0;
    int mid = 0;                     // mid is used as an iterator.
    int high = nums.size()-1;



    // ALso called the Dutch National Flag algo 

    while(mid<=high){
        if (nums[mid] == 0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;

            
        }

        else if (nums[mid] == 1){
            mid++;
            
        }
        else {
            swap(nums[mid],nums[high]);
            high--; 
        }
    }

}

int main(){

    vector<int> nums = {2,0,1,0,1,2,0,0,1,1,2,0,0,1,0,0,2};

    sortColorsFaster(nums);

    for(int i=0;i<nums.size();i++) cout<<nums[i]<<" ";  

    return 0;

}