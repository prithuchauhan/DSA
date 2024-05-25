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


long long pairWithMaxSum(long long arr[], long long N)
    {   
        long long maxi = INT_MIN;

        for(int i=0;i<N-1;i++){
            long long sum = arr[i]+arr[i+1];
            maxi = max(sum,maxi);
        }

        return maxi;

    }

int main(){

    long long arr[] = {4, 3, 1, 5, 6} ;

    cout<<pairWithMaxSum(arr,5);
    

    return 0;

}