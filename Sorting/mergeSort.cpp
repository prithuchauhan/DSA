#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

using ll = long long;

void merge(int arr[], int l, int m, int r)
    {
        vector<int> temp;
        int left = l;
        int right = m+1;

        while (left<=m && right<=r){                              // linear time 
            if (arr[left]<arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;

            }
        } 
        while(left<=m){                                         // add leftover elements
            temp.push_back(arr[left]);
            left++;
        }
        
        while(right<=r){
            temp.push_back(arr[right]);
            right++;
        }

        for(int i = l; i<=r;i++){
            arr[i] = temp[i-l];
        }


    }

    void mergeSort(int arr[], int l, int r)
    {

        if (l>=r){
            return ;
        }

        int mid = (l+r)/2;


        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);


    }

    int main(){

        int array[] =  {22,32,2,5,1};

        mergeSort(array,0,4);

        for(int i=0;i<=4;i++) cout<<array[i]<<" ";

        return 0;
    }