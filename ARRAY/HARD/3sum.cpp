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

#define debug(x) cout << #x << " = " << (x) << endl

// QUESTION LINK : https://leetcode.com/problems/3sum/description/

vector<vector<int>> threeSum(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n = nums.size();

        vector<vector<int>> ans;

        for(int i=0;i<n-2;i++){

            // cout<<i<<endl;

            if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
            }

            
            int target = -nums[i];
            int j=i+1;
            int k=n-1;

            while(j<k){
    

                if (nums[j]+nums[k] == target){

                    ans.push_back({nums[i],nums[j],nums[k]});
                    while (j<k && nums[j] == nums[j+1]){
                        j++;
                    }
                    while ( j<k && nums[k] == nums[k-1] ){
                        k--;
                    }
                    j++;
                    k--;
                    
                
                }
                else if (nums[j]+nums[k] > target){
                    k--;
                }
                else{
                    j++;
                }
            }

        }  

        return ans;  
    }


int main(){

    vector<int> nums = {-1,0,1,2,-1,-4};
    nums = {-4,-1,-1,0,1,2};

    vector<vector<int>> ans = threeSum(nums);

    // for(int i=0;i<nums.size();i++){
    //     cout<<nums[i]<<" ";
    // }
    // cout<<endl;
    
    for(auto iter : ans){
        cout<<iter[0]<<" "<<iter[1]<<" "<<iter[2]<<" ";
        cout<<endl;
    }


    

    return 0;

}