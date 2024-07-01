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

// QUESTION LINK : https://leetcode.com/problems/powx-n/

using lli = long long;

#define debug(x) cout << #x << " = " << (x) << endl


double power(double x, long long n){            // binary exponentiation

    if (n == 0){                // base case
        return 1;
    }

    double half = pow(x,n/2);

    if (n%2 == 0){
        return half*half;                     // rat lo 
    }
    else{
        return half*half*x;
    }

}

double myPow(double x, int n) {

    double res = 1;

    // binary exponentiation :-  baad main abhi  pahle simple for.



    // if (n==0 || x == 1){
    //     return 1;
    // }

    // else if (n>0){
        
    //     for(int i=0;i<n;i++){
    //         res *= x;
    //     }
    //     return res;
    // }
    // else{
    //     for(int i=0;i<-1*n;i++){
    //         res /= x;
    //     }

    //     return res;
        
    // }

    // simple ne time complexity error de diya. acha vo edge case the.

    

    if (n == 0){
        return 1;
    }

    if (n<0){
        x = 1/x;

        lli exp = n;           // to convert n to lli take another var of lli type and then 

        
        // cout<<n<<endl;                       

        exp *= -1;

        // cout<<exp<<endl;

        return power(x,exp);

        
    }
    else{

        n = (long long)n;
        return power(x,n);
    }






        
    }


int main(){

    double x = 2.00000;
    int n = INT_MIN;

    cout<<myPow(x,n)<<endl;


    

    return 0;

}
