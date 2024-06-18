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

int minDays(vector<int>& bloomDay, int m, int k) 
    {
        int n = bloomDay.size();
        long long b = m;
        long long total  = b*k;
        if (n<total){
            return -1;
        }

        int Min = INT_MAX;
        int Max = INT_MIN;

        for (int i=0;i<n;i++){
            if (bloomDay[i]>Max){
                Max = bloomDay[i];
            }
            if (bloomDay[i]<Min){
                Min = bloomDay[i];
            }


        }

        int low = Min;
        int high = Max;

        int ans = -1;

        // debug(low);
        // debug(high);


        // so our binary search space is this .... 
        // low = Min and high = Max;


        while(low<=high){
            int mid = low + (high-low)/2;

            int bouquetcnt = 0;
            int flowercnt = 0;


            for (int i=0;i<n;i++){

                if (bloomDay[i]<=mid){
                    flowercnt++;
                }
                if (bloomDay[i]>mid){
                    if (bouquetcnt<m){
                        flowercnt = 0;
                    }
                }
                if (flowercnt == k){
                    bouquetcnt++;
                    flowercnt = 0;
                }


            }

            if (bouquetcnt>=m){
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

    vector<int> bloomDay = {7,7,7,7,12,7,7};
    int m = 2;
    int k = 3;

    cout<<minDays(bloomDay,m,k);

    

    return 0;

}