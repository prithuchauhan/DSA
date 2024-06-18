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

//Question Link : https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/


// bhai pahli baar main kaise accept hogaya. lol   ... i m learning BS.

int smallestDivisor(vector<int>& nums, int threshold) {
        
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        int n = nums.size();
        int ans = -1;

        while(low<=high){
            int mid = low + (high-low)/2;

            int sum = 0;

            for (int i=0;i<n;i++){
                sum += ceil(double(nums[i])/mid);

            }

            if (sum <= threshold){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return ans;
    }


int main(){

    vector<int> nums = {44,33,22,11,1};
    int threshold = 44;

    cout<<smallestDivisor(nums,threshold);


    

    return 0;

}