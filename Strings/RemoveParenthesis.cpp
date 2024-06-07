
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

// QUESTION LINK : https://leetcode.com/problems/remove-outermost-parentheses/description/

string removeOuterParentheses(string s)
    {   
        string ans = "";
        
        int cntopen = 0;
        int cntclosed = 0;

        int i=0;

        bool open = true;
        
        while(i<s.size()){


            if (s[i] == '('){
                cntopen++;
            }
            else{
                cntclosed++;
            }

            if (cntopen == cntclosed){
                i++;
                open = true;
            }
            
            else{
                if(!open){
                ans += s[i];
                
                }
                i++;
                open = false;
            }
        }
        return ans;
    }

int main(){

    string s;
    cin>>s;

    cout<<removeOuterParentheses(s)<<endl;
    

    return 0;

}
