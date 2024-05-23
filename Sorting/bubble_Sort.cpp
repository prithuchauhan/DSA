QUESTION LINK : https://www.geeksforgeeks.org/problems/bubble-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bubble-sort


#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>

using namespace std;
using ll = long long;


void bubbleSort(int arr[], int n) {
    for (int i=1;i<n;i++){                             // n-1 iterations of swapping places (0 to n-1, 0 to n-2, 0 to n-3..... 0 to 1)
        for(int j=0;j<n-i;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);                 // swap places 
            }
        }
    }   
    }

int main(){
    int n;
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++) cin>>array[i];

    bubbleSort(array,n);

    for(int i=0;i<n;i++) cout<<array[i]<<" ";

    return 0;
}
