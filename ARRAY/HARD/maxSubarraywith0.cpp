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

#define debug(x) cout << #x << " = " << (x) << endl


// Question LINK : https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1?category%5B%5D=Hash&company%5B%5D=Amazon&page=1&query=category%5B%5DHashcompany%5B%5DAmazonpage1company%5B%5DAmazoncategory%5B%5DHash&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-subarray-with-0-sum

// int maxLen(vector<int>& arr, int n)           // runtime error .. 
//     {   
//         unordered_set<int> st;
//         int sum = 0;
//         int ans = 0;
//         vector<int> psum;
//         for(int i=0;i<n;i++){
//             sum += arr[i];
//             if (st.find(sum) != st.end()){
//                 for(int j=0;j<psum.size();j++){
//                     if (psum[j] == sum){
//                         ans = max(ans,(i-j));
//                         break;
//                     }
//                 }
//             }
//             psum.push_back(sum);
//             st.insert(sum);
//         }

//         // for(int i=0;i<psum.size();i++){
//         //     cout<<psum[i]<<" ";
//         // }

//         // cout<<endl;

//         // debug(ans);

//         for(int i=psum.size()-1;i>=0;i--){
//             if (psum[i] == 0){
//                 ans = max(ans,i+1);
//                 break;
                
//             }
//         }


//         return ans;





        
//     }


int maxLen(vector<int>& arr, int n) {
    map<int,int> mp;

    int sum = 0;
    int ans = 0;

    for(int i=0;i<n;i++){
        sum += arr[i];
        if (sum == 0){
            ans = max(ans,i+1);
        }
        else if (mp.find(sum) != mp.end()){
            ans = max(ans,i-mp[sum]);
        }
        else {
            mp[sum] = i;
        }
    }

    return ans;
}

int main(){

    vector<int> arr;
    int n;


    #ifndef ONLINE_JUDGE
    std::freopen("input.txt", "r", stdin);
    std::freopen("output.txt", "w", stdout);
    #endif

    cin>>n;
    for(int i=0;i<n;i++){
        int el;
        cin>>el;
        arr.push_back(el);
    }

    cout<<maxLen(arr,n);
    

    return 0;

}