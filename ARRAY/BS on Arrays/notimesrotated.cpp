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

//QUESTION LINK : its basically a low finding problem the minimum's index is the number of rotations.



int findKRotation(int arr[], int n) {
	    
	    int low = 0;
	    int high = n-1;
	    
	    while (low<high){
	        
	        int mid = (low+high)/2;
	        
	    
	        if (arr[mid]<arr[high]){
	            high = mid;
                
	        }
	        else{
	            low = mid+1;
	        }
	    }
	    return low;
	}


int main(){
    int arr[] = {5,1,2,3,4};
    int n = 5;
    cout<<findKRotation(arr,n);

    return 0;
}