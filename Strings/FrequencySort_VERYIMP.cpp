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

// QUESTION LINK : https://leetcode.com/problems/sort-characters-by-frequency/description/


// U CANT MULTIPLY INT WITH CHAR TO REPEAT THEM BRUHH I THOUGHT EVERYTHING WOULD BE EASY AS IN PYTHON.



static bool cmp(pair<int,int> a, pair<int,int> b){
    return (a.second > b.second);              // how to sort given second pair.
}

string frequencySort(string s) 
    {
        vector<pair<int,int>> freq(256);

        for(int i=0;i<256;i++){
            freq[i] = make_pair(i,0);
        }


        for(int i=0;i<s.size();i++){
            freq[int(s[i])].second++; 
        }    

        sort(freq.begin(),freq.end(),cmp);            

        string ans = "";

        for (int i=0;i<256;i++){
            if (freq[i].second>0){
                cout<<char(i)<<" "<<"i = "<<i<<endl;
                ans += string(freq[i].second,freq[i].first);        // THIS IS HOW STRINGS ARE FORMED PLS SEE.
            }
        }

        return ans;
    }

int main(){

    string s = "tree";

    cout<<frequencySort(s)<<endl;
    

    return 0;

}