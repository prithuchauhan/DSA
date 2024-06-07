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

string largestOddNumber(string num) 
    {
        int n = num.size();
        int end = -1;

        for(int i=n-1;i>=0;i--){
            if ((static_cast<int> (num[i]))%2 == 1){
                end = i;
                break;
            }
        }

        if (end == -1){
            return "";
        }
        else{
            return num.substr(0,end+1);
        }

    }

int main(){


    string num = "52";

    cout<<largestOddNumber(num)<<endl;
    

    return 0;

}