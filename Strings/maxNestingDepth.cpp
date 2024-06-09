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

//QUESTION LINK : https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/

int maxDepth(string s)
    {
        int Max = INT_MIN;
        int count = 0;

        for(int i=0;i<s.size();i++){
            if (s[i] == '('){
                count++;

            }
            else if (s[i] == ')'){
                count--;
            }

            Max = max(count,Max);

        }

        return Max;

    }

int main(){

    string s = "()(())((()()))";

    cout<< maxDepth(s)<<endl;
    

    return 0;

}