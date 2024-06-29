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

// QUESTION LINK : https://leetcode.com/problems/search-a-2d-matrix/description/

#define debug(x) cout << #x << " = " << (x) << endl

int floor(vector<int> arr, int target){
    int low = 0;
    int high = arr.size()-1;

    int ans = -1;

    while(low<=high){
        int mid = low + (high-low)/2;

        if (arr[mid]<=target){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    return ans;
}

bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        vector<int> v;
        int rows = matrix.size();
        int cols = matrix[0].size();

        for(int i=0;i<rows;i++){
            v.push_back(matrix[i][0]);
        }    

        int rqrow = floor(v,target);

        if (rqrow == -1) return 0;

        int ans = binary_search(matrix[rqrow].begin(),matrix[rqrow].end(),target);

        return ans;
    }


int main(){

    vector<vector<int>> matrix = {{1}};
    int target = 0;

    cout<<searchMatrix(matrix,target)<<endl;
    
    vector<int> v = {1};
    cout<<floor(v,0);

    return 0;

}