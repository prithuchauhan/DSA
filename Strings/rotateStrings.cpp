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

bool rotateString(string s, string goal) 
    {   
        if (s.size() != goal.size()){
            return false;
        }

        string combined = s+s;

        return (combined.find(goal) != string::npos);
    }

int main(){
    

    return 0;

}


