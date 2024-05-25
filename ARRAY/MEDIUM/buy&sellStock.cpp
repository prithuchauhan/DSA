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


int maxProfit(vector<int>& prices) 
    {
        int buy = INT_MAX;
        int profit = INT_MIN;

        for(int i=0;i<prices.size();i++){
            profit = max(profit,prices[i]-buy);
            buy = min(buy,prices[i]);
        }

        return max(profit,0);
    }

int main(){

    vector<int> prices = {7,6,4,3,1};

    cout<<maxProfit(prices)<<endl;
    

    return 0;

}