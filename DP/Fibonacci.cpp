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

int fibonacci(int n, vector<int> &dp){

    
    if(n==1 || n==0){
        return dp[n];
    }
    else{
        if(dp[n] != -1){
            return (dp[n]);
        }

        else{
            return dp[n] = fibonacci(n-1,dp) + fibonacci(n-2,dp);
    }
}
}

int main(){
  

    int n;
    cin>>n;

    vector<int> dp(n+1,-1);

    dp[0] = 0;
    dp[1] = 1;

   
    

    cout<<fibonacci(n-1,dp)<<endl;

    for(int i=0;i<n;i++){
        cout<<dp[i]<<" ";
    }


    return 0;

}
