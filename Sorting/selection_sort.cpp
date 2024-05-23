#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<bits/stdc++.h>
#include<array>


// Question LINK : https://www.geeksforgeeks.org/problems/selection-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=selection-sort

using namespace std;
using ll = long long;

// select() takes arr[] and starting point of unsorted array i as input parameters and returns the selected element for each iteration in selection sort,
// and selectionSort() takes the array and it's size and sorts the array.

int select(int arr[], int i, int n)
{
    int mini = i;

    // auto size = sizeof(arr)/sizeof(arr[0]);           // arrays dont have size attribute // size should be calculated in main instead of within the function
    
    for(int iter=i;iter<n;iter++){
        if (arr[iter]<arr[mini]){
            mini = iter;
        }
    }

    return mini;
}


void selectionSort(int arr[], int n)
{
    for(int i=0;i<n;i++){
        int swap = select(arr,i,n);
        int temp = arr[i];
        arr[i] = arr[swap];
        arr[swap] = temp;
    }

    return ;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++) cin>>array[i];
    
    // for (int i=0;i<5;i++){
    //     cout<<array[i]<<" ";
    // }                                                // size of array calc here issue is size of returns the size of pointer within the function and not the size of array 
    
    // only after declaration it returns the size of array. 

    selectionSort(array,5);

    for (int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }

    return 0;

}