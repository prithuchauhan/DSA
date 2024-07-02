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

// QUESTION LINK : https://leetcode.com/problems/merge-sorted-array/description/

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 

    {   
        if (m == 0){
            nums1 = nums2;
            return;
        }

        if (n == 0){
            return;
        }

        for(int i=m;i<m+n;i++){
            nums1[i] = nums2[i-m]; 
        }

        int i=m-1;
        int j = n-1;
        int k = m+n-1;

        while(i>=0 && j>=0){
            if (nums1[i]<nums2[j]){
                nums1[k] = nums2[j];
                j--;
                k--;
            }
            else{
                nums1[k] = nums1[i];
                i--;
                k--;
            }
        }

        while(j>=0){
            nums1[k] = nums2[j];
            k--;
            j--;
        }

        // debug(i);
        // debug(j);
        // debug(k);

        
    }


int main(){

    vector<int> nums1 = {2,0};
    int m = 1;
    vector<int> nums2 = {1};
    int n = 1;

    merge(nums1,m,nums2,n);

    for(auto iter : nums1){
        cout<<iter<<" ";
    }
    

    return 0;

}