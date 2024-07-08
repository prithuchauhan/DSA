
//QUESTION LINK : https://leetcode.com/problems/palindrome-partitioning/




class Solution {
public:
    bool isPalindrome(string s, int start, int end) {
        int i = start;
        int j = end;

        while (i <= j) {
            if (s[i] == s[j]) {
                i++;
                j--;

            } else {
                return false;
            }
        }

        return true;
    }

    void allPossible(string &s, int ind, vector<vector < string >> &ans,
                     vector<string> &cur) {
        // base case

        if (ind == s.size()) {
            ans.push_back(cur);
            return;
        }

        for (int i = ind; i < s.size(); i++) {
            if (isPalindrome(s,ind,i)){
                cur.push_back(s.substr(ind,i-ind+1));
                allPossible(s,i+1,ans,cur);
                cur.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> ans;
        vector<string> cur;

        allPossible(s,0,ans,cur);

        return ans;
    }
};
