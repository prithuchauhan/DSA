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

// QUESTION LINK : https://leetcode.com/problems/merge-intervals/description/

// custom comparator 

bool cmp(vector<int> v, vector<int> y){
    return v[0] < y[0];
}


vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(),intervals.end(),cmp);

        int n = intervals.size();

        int i=0;

        vector<vector<int>> ans;

        int start = intervals[0][0];
        int end = intervals[0][1];

        for(int i=1;i<n;i++){

            if (intervals[i][0]<=end){
                end = max(intervals[i][1], end);
            }
            else{
                ans.push_back({start,end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }

        ans.push_back({start,end});

        return ans;
    }

int main(){

    vector<vector<int>> intervals = {{1,4},{6,8},{8,13},{11,12}};

    vector<vector<int>> ans = merge(intervals);

    for(auto iter : intervals){
        cout<<iter[0]<<" "<<iter[1]<<" , ";
    }

    cout<<endl;

    
    for(auto iter : ans){
        cout<<iter[0]<<" "<<iter[1]<<" , ";
    }
    

    return 0;

}













