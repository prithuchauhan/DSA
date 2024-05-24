#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
using ll = long long;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left<=mid && right<=high){
        if (arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }

    }

    while(left<=mid){                                     // leftover elements
        temp.push_back(arr[left]);
        left++;
    }
    while (right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++){                          // copy from temp to original
        arr[i] = temp[i-low];
    }
}

void mergeSortHelper(vector<int> &arr, int low, int high){

    if (low>=high){
        return;                  // base case
    }

    int mid = (low+high)/2;

    mergeSortHelper(arr,low,mid);
    mergeSortHelper(arr,mid+1,high);
    merge(arr,low,mid,high);


}
void mergeSort(vector < int > & arr, int n) {


        int low = 0;
        int high = n-1;
        mergeSortHelper(arr,low,high);
}

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    mergeSort(v,n);

    for(int i=0;i<n;i++) cout<<v[i]<<" ";
}