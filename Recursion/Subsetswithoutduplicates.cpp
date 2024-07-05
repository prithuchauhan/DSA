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

// Question LINK : https://leetcode.com/problems/subsets-ii/




// void addsubs(vector<int> &nums, int ind , vector<int> &subs, vector<vector<int>> &ans){
    

//     if (ind >= nums.size()){
//         if (find(ans.begin(),ans.end(), subs) == ans.end()){
//             ans.push_back(subs);
//         }
//         return;
//     }

//     subs.push_back(nums[ind]);
//     addsubs(nums,ind+1,subs,ans);
//     subs.pop_back();
//     addsubs(nums,ind+1,subs,ans);





// }

// BETTER WAY 



// void recursionHelp(vector<int> &nums, vector<vector<int>> &ans, int ind,int n, vector<int> &cur){

//     if (ind == n){
//         ans.push_back(cur);
//         return;
//     }

    

//     // pick 
//     cur.push_back(nums[ind]);
//     recursionHelp(nums,ans,ind+1,n,cur);

//     // not pick
//     cur.pop_back();
//     recursionHelp(nums,ans,ind+1,n,cur);                // this leads to duplicates 

// }




void recursionHelp(vector<int> &nums, vector<vector<int>> &ans, int ind,int n, vector<int> &cur){

    ans.push_back(cur);

    // to remove duplicates add this part.
    for(int j=ind;j<n;j++){

        if (j>ind && nums[j-1] == nums[j]){
            continue;
        }

        // pick 
        cur.push_back(nums[j]);
        recursionHelp(nums,ans,j+1,n,cur);
        cur.pop_back();


    }

    

    

}


vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> cur;
        sort(nums.begin(),nums.end());

        int n = nums.size();

        recursionHelp(nums,ans,0,n,cur);

        return ans;
    }


int main(){

    vector<int> nums = {1,2,2};

    vector<vector<int>> ans = subsetsWithDup(nums);

    for(auto iter : ans){
        for (auto it : iter){
            cout<<it<<" ";
        }
        cout<<endl;
    }


    

    return 0;

}   

// better insert into sets 