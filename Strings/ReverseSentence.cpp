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

// Question Link : https://leetcode.com/problems/reverse-words-in-a-string/description/

// string reverseWords(string s)     // this works too the below one is tad bit faster tho cause it doesnt involve making substrings again and again no major differences
//     {
//         vector<string> words;

//         int remove = 0;

//         while(s[remove] == ' '){
//             s = s.substr(1,s.size()-1);
//         }

//         remove = s.size()-1;

//         while(s[remove] == ' '){
//             s = s.substr(0,s.size()-1);
//         }

//         // cout<<s<<endl;

//         s = s+" ";

//         int start = 0;
//         int end = -1;

//         for(int i=0;i<s.size();i++){
            
//             if (s[i] == ' '){
//                 end = i;
//                 while (s[i] == ' ' && i<s.size()){
//                     i++;
//                 }
//                 words.push_back(s.substr(start,end-start));
//                 start = i;
//             }

            
//         }

//         // words.push_back(s.substr(start,s.size()-start));

//         string ans = "";

        


//         for(auto iter = words.rbegin();iter!=words.rend();iter++){
//             ans += *iter;
//             ans += " ";
//         }

//         ans = ans.substr(0,ans.size()-1);

//         return ans;
        
//     }  


string reverseWords(string s)
    {
        int n = s.size();
        int i = 0;

        string ans = "";

        while(i<n){
            string temp = "";
            while(s[i] == ' ' && i<n){
                i++;
            }

            while(s[i] != ' ' && i<n){
                temp += s[i];
                i++;
            }

            // cout<<temp.size()<<endl;

            if (ans.size() == 0){
                ans += temp;
            }

            else{
                if (temp.size()!=0){
                    ans = temp + " " + ans;
                }
            }
        }

        return ans;
    } 

int main(){

    string s = "  hello world  ";

    cout<<reverseWords(s)<<endl;
    

    return 0;

}
