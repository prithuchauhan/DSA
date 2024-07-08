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


void addsubs(vector<int> &nums, int ind , vector<int> &subs, vector<vector<int>> &ans){
    

    if (ind == nums.size()){
        ans.push_back(subs);
        return;
    }

    //pick 
    subs.push_back(nums[ind]);
    addsubs(nums,ind+1,subs,ans);

    // not pick
    subs.pop_back();
    addsubs(nums,ind+1,subs,ans)
    






}




vector<vector<int>> subsets(vector<int> &nums){

    vector<int> subs;

    vector<vector<int>> ans;

    addsubs(nums,0,subs,ans);


   return ans;
    

    








}

int main(){

    vector<int> v = {1,2,3};

    vector<vector<int>> ans  = subsets(v);

    for(auto iter : ans){
        for (auto it : iter){
            cout<<it<<" ";
        }

        cout<<endl;
    }
    
    

    return 0;

}