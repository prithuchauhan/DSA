#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>

// QUESTION LINK : https://www.geeksforgeeks.org/problems/insertion-sort/0?category%5B%5D=Algorithms&page=1&query=category%5B%5DAlgorithmspage1&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=insertion-sort

using namespace std;
using ll = long long;

// start from 0th to nth element and act like every element is being added until that index.

void insert(int arr[], int i)
    {
        for(int iter = i;iter>0;iter--){
            if (arr[iter]<arr[iter-1]){
                swap(arr[iter],arr[iter-1]);
            }
        }
    }

void insertionSort(int arr[], int n)
    {
        for(int i=1;i<n;i++){
            insert(arr,i);
        }
    }


int main(){
    int n;
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++) cin>>array[i];

    insertionSort(array,n);

    for(int i=0;i<n;i++)  cout<<array[i]<<" ";

}