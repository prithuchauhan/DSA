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

//QUESTION LINK : https://leetcode.com/problems/subarray-sum-equals-k/description/

// how many subarrays with the given sum.  

// recursive is probably same as brute force (no backtracking possible in my opinion.)


// O(n^2) possible with a matrix I suppose 



// int subarraySum(vector<int>& nums, int k)
//     {   
//         int n = nums.size();
//         map<int,int> sumcountmap;

//         for(int i=0;i<n;i++){
//             sumcountmap[nums[i]]++;
//             int sum = nums[i];
//             for(int j=i+1;j<n;j++){
//                 sum += nums[j];
//                 sumcountmap[sum]++;
//             }
//         }

//         if (sumcountmap.find(k) != sumcountmap.end()){
//             return sumcountmap[k];
//         }
//         else{
//             return 0;
//         }



//     }

// BRUTE FORCE DOESNT WORK 

// Its PREFIX SUM !!!!!! How did we miss this we r cooked bruhh.

// what to do calculate prefix sums and put them in map as we calculate also check if x-k exists in the map u get the idea...


int subarraySum(vector<int> &nums, int k)

{

    unordered_map<int,int> mp;
    int n = nums.size();
    vector<int> prefixsum(n);

    prefixsum[0] = nums[0];
    for(int i=1;i<n;i++){
        prefixsum[i] = prefixsum[i-1]+nums[i];
    }

    // for (auto iter : prefixsum){
    //     cout<<iter<<" ";
    // }
    // cout<<endl;
    

    int ans = 0;

    for(int i=0;i<n;i++){
        if (prefixsum[i] == k){
            ans++;
        }

        if (mp.find(prefixsum[i]-k) != mp.end()){
            ans += mp[prefixsum[i]-k];

        }

        mp[prefixsum[i]]++;
    }

    return ans;



    

}

int main(){

    vector<int> nums = {1,1,1};
    int k = 2;


    cout<<subarraySum(nums,k);

    
    

    return 0;

}