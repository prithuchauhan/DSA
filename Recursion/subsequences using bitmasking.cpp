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


// vector<vector<int>> subsets(vector<int>& nums) {           // subsets are subsequences.

//     int n = 1;
//     int mask = n<<nums.size();

    
//     vector<vector<int>> ans;

//     for(int i=0;i<mask;i++){
        
//         vector<int> subs;

//         for(int bitmask = 0; bitmask<nums.size(); bitmask++){
//             if (i & (1<<bitmask)){
//                 subs.push_back(nums[bitmask]);
//             }
//         }

//         ans.push_back(subs);
        
//     }

//     return ans;


// }

vector<vector<int>> subsets(vector<int>& nums) {

        int n = 1;
        int mask = n<<nums.size();

        vector<vector<int>> ans;

        for(int i=0;i<mask;i++){

            vector<int> subans;

            for(int dig = 0; dig<nums.size();dig++){
                if (i & 1<<dig){
                    subans.push_back(nums[dig]);
                }
            }

            ans.push_back(subans);
        }

        return ans;
    }

int main(){
    
    vector<int> v = {1,2,3};

    auto ans = subsets(v);

    for (auto it : ans){
        for (auto iter : it){
            cout<<iter<<" ";
        }

        cout<<endl;
    }

    
    return 0;

}