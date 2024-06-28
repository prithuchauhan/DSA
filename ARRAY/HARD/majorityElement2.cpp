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

// majority element when greater than n/2 kisse kiya tha => Boyer Moore voting algorithm.
// ab n/3 se zaada batana hai.

// QUESTION LINK : https://leetcode.com/problems/majority-element-ii/description/

vector<int> majorityElement(vector<int>& nums) 
    {
 

        int cnta = 0;
        int cntb = 0;
        int a = INT_MIN;
        int b = INT_MIN;

        int n = nums.size();



        for(int i = 0; i<n;i++){
            if (a == nums[i]){
                cnta++;
            }
            else if (b == nums[i]){                   // pahle a ka mamla fit baith raha to a 
                cntb++;
            }

            else if (cnta == 0){
                a = nums[i];
                cnta++;
            }       
            else if (cntb == 0){                       // fir b ka mamla remember this 
                b = nums[i];
                cntb++;
            }
            else{
                cntb--;
                cnta--;
            }
        }

        cnta = 0;
        cntb = 0;

        for(int i=0;i<n;i++){
            if (nums[i] == a){
                cnta ++ ;
            }
            else if (nums[i] == b){
                cntb++;
            }
        }

        vector<int> ans;

        if (cnta > n/3){
            ans.push_back(a);
        }
        if (cntb>n/3){
            ans.push_back(b);
        }

        return ans;

    }



int main(){
    vector<int> nums = {3,2,3};

    vector<int> ans = majorityElement(nums);    

    for(auto iter : ans){
        cout<<iter<<" ";
    }

    return 0;

}