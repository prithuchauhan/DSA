#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<bits/stdc++.h>

// QUESTION LINK : https://www.geeksforgeeks.org/problems/quick-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=quick-sort

using namespace std;

using ll = long long;

// recursive algo 

// to remember, keep in mind the pseudocode

// quicksort(arr, low, high){
//     if (low<high){
//         pIndex = partition(arr,low,high)

//         quicksort(arr,low,pindex-1);
//         quicksort(arr,pindex+1,high);
//     }
// }
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int partition (int arr[], int low, int high)
    {
        int pivot = arr[high];
        int i = low-1;
       
        for(int j=low;j<high;j++){                                   // compares arr[j] i.e. each element to pivot except the last which is the pivot itself
            if (arr[j]<=pivot){
                i = i+1;
                swap(arr[i],arr[j]);

            }
        }

        swap(arr[i+1],arr[high]);             // swaps the pivot with the element to the right of the element which is the last smaller element than pivot
        return i+1;

       

    }

void quickSort(int arr[], int low, int high)
    {   
        if (low<high){                                  // low<high ensures there are atleast two elements to be sorted in the subarray.
        int pivot = partition(arr,low,high);
        quickSort(arr,low,pivot-1);                     // pivot is already sorted hence not included in recursive sorting.
        quickSort(arr,pivot+1,high);
        } 
    }

int main(){


    int arr[] = {23,2,15,4,11};

    

    quickSort(arr,0,4);



    

    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
}