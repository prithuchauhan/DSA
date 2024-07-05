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

// QUESTION LINK : https://www.geeksforgeeks.org/problems/subset-sums2234/1

void recursionHelp(vector<int> &arr, int n, vector<int> &ans, int ind, int sum){
    if (ind == n){
        ans.push_back(sum);
        // cout<<sum<<endl;
        return;
    }

    
    // why were u adding in between. 
    // subset sum minimum 2^n hi lega because 2^n subsets.
    recursionHelp(arr,n,ans,ind+1,sum+arr[ind]);
    recursionHelp(arr,n,ans,ind+1,sum);

    return;

}


vector<int> subsetSums(vector<int> arr, int n) {
        vector<int> ans;

        recursionHelp(arr,n,ans,0,0);

        

        return ans;

    }


int main(){

    int n = 2;

    vector<int> arr = {2,3};

    vector<int> a = subsetSums(arr,n);

    for(auto iter : a){
        cout<<iter<<" ";
    }
    

    return 0;

}