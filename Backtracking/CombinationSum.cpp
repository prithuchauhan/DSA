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

// QUESTION LINK : https://leetcode.com/problems/combination-sum/description/


vector<vector<int>> ans;
vector<int> subans;

void backtrack(int ind, int target, vector<int> &candidates){

    if (target == 0){
        ans.push_back(subans);
        return;
    }

    if (ind == candidates.size() || target<0){
        return;
    }

    backtrack(ind+1,target,candidates); // not choosing and going on that path further.

    // choosing and going on that path

    subans.push_back(candidates[ind]);

    backtrack(ind,target-candidates[ind],candidates);

    subans.pop_back();

    



}

vector<vector<int>>combinationSum(vector<int> candidates, int target){


    backtrack(0,target,candidates);

    for (auto iter : ans){
        for (auto it : iter){
            cout<<it<<" ";

        }
        cout<<endl;
    }

    return ans;

}






int main(){

    vector<int> candidates = {2,3,6,7};

    int target = 7;

    combinationSum(candidates,target);
    

    return 0;

}
