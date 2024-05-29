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

// QUESTION LINK : https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=leaders-in-an-array

vector<int> leaders(int a[], int n){
        int MAX = a[n-1];
        vector<int> ans;
        ans.push_back(a[n-1]);

        for(int i=n-2;i>=0;i--){
            MAX = max(a[i],MAX);
            if (MAX == a[i]){
                ans.push_back(a[i]);
            }
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }

int main(){

    int a[] = {16,17,4,3,5,2};

    vector<int> answer = leaders(a,6);

    for(int i=0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
    

    return 0;

}