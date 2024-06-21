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

// QUESTION LINK : https://leetcode.com/problems/lemonade-change/description/

bool lemonadeChange(vector<int>& bills) {
    
    map <int,int> mp;

    int n = bills.size();

    mp[5] = 0;
    mp[10] = 0;
    mp[20] = 0;

    bool ans = true;

    for(int i=0;i<n;i++){
        


        mp[bills[i]]++;


        if (bills[i] == 10){
            mp[5]--;
        }
        else if (bills[i] == 20){
            if (mp[10]>0){
            mp[5]--;
            mp[10]--;
        }
        else{
            mp[5] = mp[5]-3;
        }
        }

        for(auto iter : mp){
            if (iter.second < 0){
                return false;
                
            }
        }
    }

    return ans;
        
    }


int main(){

    vector<int> bills = {5,5,10,10,20};

    cout<<lemonadeChange(bills);
    

    return 0;

}