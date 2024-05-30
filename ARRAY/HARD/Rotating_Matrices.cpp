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

// QUESTION LINK : https://leetcode.com/problems/rotate-image/description/

// in this we try to rotate matrices IN-PLACE by 90 degrees both clockwise and anticlockwise.

// remember break down rotation into operations that can be done on matrix inplace.

// CLOCKWISE : transpose and reverse each row . 

// ANTICLOCKWISE  : do this three times. lol or Transpose and reverse every column of the matrix.





void rotate(vector<vector<int>>& matrix) 
    {   
        int n = matrix.size();
        for (int i=0;i<n;i++){    
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);                // transpose done
            }        
        }   

        for(int i=0;i<n;i++){
            int low=0;
            int high = n-1;
            while(low<high){
                swap(matrix[i][low],matrix[i][high]);            // reverse // reverse can also be done by reverse(matrix[i].begin(),matrix[i].end())
                low++;
                high--;
            }
        }
    }
    

int main(){

    vector<vector<int>> matrix = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};

    rotate(matrix);

    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix.size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }    

    return 0;

}
