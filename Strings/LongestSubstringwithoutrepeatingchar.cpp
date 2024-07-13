// SLIDING WINDOW 

// QUESTION LINK : https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        

        vector<int> cnt(256,0);

        int i=0;
        int n = s.size();
        int j = 0;

        int maxlen = 0;

        while(j<=n-1){

            cnt[s[j]-' ']++;
            while(cnt[s[j]-' ']>1){
                cnt[s[i]-' ']--;
                i++;
            }

            maxlen = max(maxlen,j-i+1);

            j++;


        }

        return maxlen;

    }
};
