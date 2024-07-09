// QUESTION LINK : https://leetcode.com/problems/longest-common-subsequence/


class Solution {
public:

    int recursion(string &text1, string &text2, int i, int j,int &m, int &n,vector<vector<int>> &dp){

        if (i<0 || j<0){
            return 0;
        }

        if (dp[i][j] != -1){
            return dp[i][j];
        }

        if (text1[i] == text2[j]){
            int len = 1 + recursion(text1,text2,i-1,j-1,m,n,dp);
            return dp[i][j] = len;
        }
        
        return dp[i][j] = max(recursion(text1,text2,i-1,j,m,n,dp),recursion(text1,text2,i,j-1,m,n,dp));
        


    }


    int longestCommonSubsequence(string text1, string text2) {
        
        int m = text1.size();
        int n = text2.size();

        vector<vector<int>> dp(m,vector<int>(n,-1));

        return recursion (text1,text2,m-1,n-1,m,n,dp);




    }
};
