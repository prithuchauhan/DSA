 // QUESTION LINK : https://leetcode.com/problems/valid-palindrome/description/


class Solution {
public:

    bool ispalindrome(string s) {
        int n = s.size();

        int start = 0;
        int end = n-1;

        while(start<=end){
            if (s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }

        return true;
    }

    string filter(string &s){

        string ans = "";

        for(int i=0;i<s.size();i++){
            if (isalnum(s[i])){
                if (islower(s[i])){
                    ans += s[i];
                }
                else{
                    char S = tolower(s[i]);
                    ans += S;
                }
            }
        }

        return ans;
    }
    bool isPalindrome(string s) {

        string ans = filter(s);
        return ispalindrome(ans);
        
    }
};
