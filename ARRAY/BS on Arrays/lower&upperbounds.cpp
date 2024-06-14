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

// lowerbound is the smallest index where arr[ind]>=target not smaller.

int bsearchlowerbound(vector<int> v, int size,int target){

    int low = 0;
    int high = size-1;
    int mid = 0;

    int ans = size; // very imp jahan run nahi hoga else vali condition vaha ke liye size aayega when target is greater than last element.
    
    

    while(low<=high){
        mid = (low+high)/2;

        if (v[mid]>=target){            // if array[mid]>=target it can be an answer wait .... difference between floor and lower bound is lower bound gives the largest element smaller than equal to given like when searching for 11 floor will give 11(5th) but this gives 3 element.
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }

        
    
    }

    return ans;

}


// upper bound gives smallest element > target


// floor and ceil are different topics - floor largest number smaller than or equal to target.
// ceil = smallest number greater than equal to target mind the equal to.

// floor = lowerbound


int bsearchupperbound(vector<int> &v, int size, int target){
    int low = 0;
    int high = size-1;

    int ans = size;           // initialise answer to size i.e. an index past the array in both lower and upper bounds.

    while(low<=high){
        int mid = (low+high)/2 ;


        if (v[mid]>target){
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
    

    vector<int> v = {2,3,5,11,11,11,23,34,45,678};
        

    auto ans = bsearchlowerbound(v,10,11);

    auto iter = lower_bound(v.begin(),v.end(),680);


    int upper = bsearchupperbound(v,10,11);

    auto upperfunc = upper_bound(v.begin(),v.end(),1);



    cout<<ans<<endl;
    cout<<iter-v.begin()<<endl;   // lowerbound gives iterator so subtract v.begin().
    cout<<upper<<endl;

    cout<<upperfunc-v.begin()<<endl;

    return 0;

}