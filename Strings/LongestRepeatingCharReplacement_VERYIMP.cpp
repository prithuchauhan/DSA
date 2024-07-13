// QUESTION LINK : https://leetcode.com/problems/longest-repeating-character-replacement/

// sliding window ka one of the best questions.



class Solution {
public:
    int characterReplacement(string s, int k) {
        
        vector<int> cnt(26,0);
        char mostpopular = s[0];
        int count = 1;
        cnt[s[0]-'A']++;

        int n = s.size();

        int i=0;
        int j = 1;

        int maxlen = 1;

        while(j<n){
            cnt[s[j]-'A']++;
            if (cnt[s[j]-'A'] > count){
                mostpopular = s[j];
                count = cnt[s[j]-'A'];
            }

            if (j-i+1<=k+cnt[mostpopular-'A']){
                maxlen = max(j-i+1,maxlen);
                
            }
            else{
                
                cnt[s[i]-'A']--;
                count--;
                i++;

            }

            j++;


        }

        return maxlen;
    }
};
