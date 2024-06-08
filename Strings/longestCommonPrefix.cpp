#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<bits/stdc++.h>
#include<array>
#include<vector>
#include<string.h>
#include<cmath>
#include<algorithm>
using namespace std;
using lli = long long;


// QUESTION LINK : https://leetcode.com/problems/longest-common-prefix/

string longestCommonPrefix(vector<string>& strs)
    {   

        if (strs.size() == 1){
            return strs[0];
        }

        if (strs.size() == 0){
            return "";
        }


        int min_size = 201;

        for(auto iter : strs){
            min_size = min(static_cast<int> (iter.size()), min_size);        // i still didnt get ki static cast kyun karna pada
        }   

        // cout<<min_size<<endl;

        //calculate the min size and iterate till there only

        int ans = 0;
        bool found = false;

        for(int i=0;i<min_size;i++){
            if (found){
                break;
            }
            for(int s=0;s<strs.size()-1;s++){
                if (strs[s][i] != strs[s+1][i]){
                    ans = i;
                    found = true;
                    break;
                }
            }

        }

        if (!found){
            ans = min_size;
        }
        
        if (ans>0){
            return strs[0].substr(0,ans);
        }
        else{
            return "";
        }
    }
int main(){

    vector<string> strs = {"ab","a"};

    cout<<longestCommonPrefix(strs);

    
    

    return 0;

}