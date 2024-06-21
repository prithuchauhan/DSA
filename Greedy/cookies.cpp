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

//QUESTION Link : https://leetcode.com/problems/assign-cookies/description/

bool cmp(int a, int b){
    return a>b;
}

int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());

        

        int i=0;
        int j = 0;  // traversal of size array
        int n = g.size();
        int m = s.size();

        if (m==0){
            return 0;
        }

        int ans = 0;

        while(i<n){
            
            if (s[j]>=g[i]){
                ans ++ ;
                j++;
                i++;
            }
            else{
                j++;
            }

            if (j == m){
                break;
            }

            
        }

        return ans;



}


int main(){

    vector<int> g = {1,2}, s = {1,2,3};

    cout<<findContentChildren(g,s);
    

    return 0;

}
