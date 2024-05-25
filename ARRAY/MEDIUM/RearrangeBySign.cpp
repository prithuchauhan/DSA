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

// could have been done in a more sophisticated code but i am in no mood to write a better code now.

// QUESTION LINK : https://leetcode.com/problems/rearrange-array-elements-by-sign/submissions/1267510332/

vector<int> rearrangeArray(vector<int>& nums)
    {
        int plus = 0;
        int minus = 0;
        vector<int> ans;

        int n = nums.size();

        while(plus<n || minus<n){
            
            {
                while(plus<n && nums[plus]<0){
                    plus++;
                }
            }

            {
                while(minus<n && nums[minus]>=0){
                    minus++;
                }
            }

            if(plus<n)
            {
                ans.push_back(nums[plus]);
                plus++;
            }
            if (minus<n)
            {
                ans.push_back(nums[minus]);
                minus++;
            }


        }

        

        return ans;  
    }

int main(){

    vector<int> nums = {-3,-3,-2,1,1,1};
    vector <int> ans;

    ans = rearrangeArray(nums);

    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    


    return 0;

}
