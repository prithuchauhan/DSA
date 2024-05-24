
#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>

using namespace std;
using ll = long long;

// QUESTION LINK : https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/


bool check(vector<int>& nums) {

        int count = 0;
        for(int i=0;i<nums.size()-1;i++){
            if (nums[i+1]<nums[i]){
                count++;
                if (count>1){
                    return false;
                }
            }
        }
        if (nums[0]<nums[nums.size()-1]){
            count++;
        }

        return (count>1) ? false : true;
    }
