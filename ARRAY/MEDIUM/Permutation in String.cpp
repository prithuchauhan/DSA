// QUESTION link : https://leetcode.com/problems/permutation-in-string/


class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if (s2.size()<s1.size()){
            return false;
        }

        vector<int> answerarray(26);
        vector<int> window(26);
        int n = s1.size();
        int m = s2.size();

        for(int i=0;i<n;i++){
            answerarray[s1[i]-'a']++;
            window[s2[i]-'a']++;
        }

        if (answerarray == window){
            return true;
        }

        int left = 0;

        
        for(int i=n;i<m;i++){
            window[s2[left]-'a']--;
            window[s2[i]-'a']++;

            if (window == answerarray){
                return true;
            }

            left++;
        }

        return false;

    }
};
