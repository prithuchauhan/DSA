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

bool isIsomorphic(string s, string t)
    {
        unordered_map<char,char> charmap;
        bool ans = true;

        for(int i=0;i<s.size();i++){                  // constraint given ki slength = tlength
            if (charmap.find(s[i]) != charmap.end()){
                if (charmap[s[i]] != t[i]){
                    ans = false;
                    break;
                }
            }
            else{

                charmap[s[i]] = t[i];

            }
        }  

        unordered_map<char,int> countmap;

        for(auto iter : charmap){
            countmap[iter.second]++;
            if (countmap[iter.second] > 1){
                ans = false;
            }
        }

        return ans;  
    }

int main(){

    string s = "paper", t = "title";

    cout<<isIsomorphic(s,t)<<endl;
    

    return 0;

}