// QUESTION LINK : https://leetcode.com/problems/longest-common-subsequence/


class Solution {
public:

    int recursion(string &text1, string &text2, int i, int j,int &m, int &n){

        if (i==m || j == n){
            return 0;
        }

        if (text1[i] == text2[j]){
            int len = 1 + recursion(text1,text2,i+1,j+1,m,n);
            return len;
        }
        else{
            return max(recursion(text1,text2,i+1,j,m,n),recursion(text1,text2,i,j+1,m,n));
        }


    }


    int longestCommonSubsequence(string text1, string text2) {
        
        int m = text1.size();
        int n = text2.size();

        return recursion (text1,text2,0,0,m,n);




    }
};
