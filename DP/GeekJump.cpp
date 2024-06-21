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

// QUESTION LINK : https://www.geeksforgeeks.org/problems/geek-jump/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=geek-jump

#define debug(x) cout << #x << " = " << (x) << endl

int helper(vector<int> &dp, vector<int> &height, int n){
    if (dp[n] != -1){
        return dp[n];
    }

    else {
        
        return dp[n] = min(dp[n-1] + abs(height[n]-height[n-1]), dp[n-2] + abs(height[n]-height[n-2]));
        
    }
}

    int f(vector<int> &height, int ind, vector<int> &dp){

        if (ind == 0){
            return 0;
        }
        if (dp[ind] != -1){
            return dp[ind];
        }




        int left =  f(height,ind-1,dp) + abs(height[ind]-height[ind-1]);
        int right = INT_MAX;
        if (ind>1){
            right = f(height,ind-2,dp) + abs(height[ind]- height[ind-2]);
        }

        return dp[ind] = min(left,right);
        }

int minimumEnergy(vector<int>& height, int n) {

    vector<int> dp(n,-1);
    // dp[0] = 0;
    // dp[1] = abs(height[0]-height[1]);
    

    // // for(auto iter : dp){
    // //     cout<<iter<<" ";
    // // }
    // // cout<<endl;



    // return helper(dp,height,n-1);

    return f(height,n-1,dp);

    
        
    }


int main(){

    int n = 4;
    vector<int> height = {10,20,30,10};

    



    cout<<minimumEnergy(height,n);




    

    return 0;

}