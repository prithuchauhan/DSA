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

// idea : four for loops for covering each side top left to right right top to bottom bottom rigth to left and left bottom to top.

// QUESTION LINK : https://leetcode.com/problems/spiral-matrix/

vector<int> spiralOrder(vector<vector<int>>& matrix)
    {
        vector<int> ans;

        int rows = matrix.size();
        int cols = matrix[0].size();

        int top = 0;
        int left = 0;
        int bottom = rows-1;
        int right = cols-1;

        while(top<=bottom && left<=right){
            // chaar for loops aynge yaha

            for (int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }

            top++;

            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;


            if (top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
            }

            bottom--;
            }

            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }

                left++;
            }


        }

        return ans;
    }

int main(){

    vector<vector<int>> matrix = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int>answer;
    answer = spiralOrder(matrix);

    for(auto it : answer) cout<<it<<" ";
    

    return 0;

}