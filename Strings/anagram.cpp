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

// QUESTION LINK : https://leetcode.com/problems/valid-anagram/description/

bool isAnagram(string s, string t) \
{

    unordered_map<char,int> charmap;

    for(int i=0;i<s.size();i++){
        charmap[s[i]]++;
    }

    for (int i=0;i<t.size();i++){
        if (charmap.find(t[i]) == charmap.end()){
            return false;
        }
        else{
            charmap[t[i]]--;
        }
    }

    for(auto iter : charmap){
        if (iter.second != 0){
            return false;
        }
    }
        
    return true;
}

int main(){

    // i dont need to check testcases even goated ....
    

    return 0;

}