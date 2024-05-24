
#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>

using namespace std;
using ll = long long;

// QUESTION LINK : https://leetcode.com/problems/two-sum/description/


vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if (nums[i]+nums[j] == target){
                    
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }

vector<int> twoSumFaster(vector <int> &nums, int target){
    map<int,int> hashmap;
    vector<int> ans;

    for(int i=0;i<nums.size();i++){
        if (hashmap.find(target-nums[i]) != hashmap.end()){
            ans.push_back(i);
            ans.push_back(hashmap[target-nums[i]]);
            return ans;
        }
        else{
            hashmap.insert(make_pair(nums[i],i));
        }
    }
}
