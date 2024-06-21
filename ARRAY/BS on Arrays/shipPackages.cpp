#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define debug(x) cout<<#x<<" = "<<(x)<<endl

using namespace std;

//QUESTION LINK : https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/

int shipWithinDays(vector<int>& weights, int days) {

    // binary search 

    int n = weights.size();

    int maxi = INT_MIN;
    int sum = 0;

    for(int i=0;i<n;i++){
        if (weights[i] > maxi ){
            maxi = weights[i];
        }

        sum += weights[i];
    }


    int low = maxi;
    int high = sum;

    int ans = -1;

    while (low<=high){
        int mid = low + (high-low)/2;    // mid is the capacity of ship remember.


        int i = 0;
        int currentcap = 0;
        int day = 1;

        while(i < n){
            currentcap += weights[i];
            if (currentcap > mid){
                // debug(currentcap);
                day++;
                // debug(day);
                currentcap = 0;
                i--;
            }
            i++;
        }

        if (day>days){
            low = mid+1;
        }
        else{
            ans = mid;
            high = mid-1;
        }

    }

    return ans;


        
    }

int main(){

    vector<int> weights = {3,2,2,4,1,4};
    int days = 3;

    cout<<shipWithinDays(weights,days);

    return 0;
}