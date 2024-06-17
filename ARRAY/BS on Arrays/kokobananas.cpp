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
using ll = long long;

// QUESTION LINK : https://leetcode.com/problems/koko-eating-bananas/description/





#define debug(x) cout << #x << " = " << (x) << endl



int minEatingSpeed(vector<int>& piles, int h)        //  see limits of binary search kaise set hongi.
    {
        int n = piles.size();

        int low = INT_MAX;
        int high = INT_MIN;

        for(int i=0;i<n;i++){
            low = min(low,piles[i]);
            high = max(high,piles[i]);
        }

        // these are our boundaries for binary search u can means high to vahi rahega low can be made even less i guess 0 hi rakh lete hai.

        low = 1;

        // debug(high);

        

        while(low<=high){
            int mid = low+(high-low)/2;
            long long ans = 0;
        

            // debug(low);
            // debug(mid);
            // debug(high);

            for(int i=0;i<n;i++){
                ans += ceil(double(piles[i])/mid);              // for ceil to work properly u will have to use double
            }

            if (ans<=h){
                high = mid-1;
            }

            else{
                low = mid+1;
            }
        }

        return low;
    }

int main(){

    vector<int> piles = {3,6,7,11};

    int h = 8;

    cout<<minEatingSpeed(piles,h)<<endl;

    



    


    return 0;
}