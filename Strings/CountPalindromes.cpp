// Problem Link : https://leetcode.com/problems/palindromic-substrings/

class Solution {
public:

    
    int countSubstrings(string s) {

       
       int result = 0;
       for(int i=0;i<s.size();i++){
            countpalindromes(s,i,i,result);
            countpalindromes(s,i,i+1,result);
       }

       return result;



    }

    void countpalindromes(string &s,int i,int j, int &result){

        while(i>=0 && j<s.size() && s[i] == s[j]){
            i--;
            j++;
            result++;
        }
    }
};
