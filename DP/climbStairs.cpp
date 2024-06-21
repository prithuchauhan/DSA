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

// QUESTION LINK : https://leetcode.com/problems/climbing-stairs/description/

#define debug(x) cout << #x << " = " << (x) << endl

// int helper(vector<int> &dp,int n){

// }

int climbStairs(int n) {

        if (n==0){
            return 0;
        }
        if (n==1){
            return 1;

        }
        if (n==2){
            return 2;
        }

        int a = 1;
        int b = 2;

        int c = 0;


        for(int i=3;i<=n;i++){               // DP logic is basically fibonacci : f(n-1)+f(n-2)
            c = a+b;
            a = b;
            b = c;

        }

        return c;
        
    }


int main(){

    int n = 4;

    cout<<climbStairs(n);

    
    

    return 0;

}