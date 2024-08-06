// Question Link : https://leetcode.com/problems/minimum-window-substring/

// same logic works in python but gives MLE on CPP this is a leetcode issue.

class Solution {
public:
    string minWindow(string s, string t) {
        
        if (t.size()>s.size()){
            return "";
        }


        vector<int> cnt(128,0);

        map<char,int> mp;

        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }

        int i=0;
        int j=0;

        cnt[s[0]-'A']++;

        int len = INT_MAX;
        string ans = "";

        while(j<s.size()){

            int flag = 1;
            
            for (auto iter : mp){
                if (cnt[iter.first-'A']<iter.second){
                    j++;
                    flag = 0;
                    break;
                }
            }

            if (!flag){
                if (j<s.size()){
                    cnt[s[j]-'A']++;
                }
            }
            else{
                if (j<s.size()){    
                    if (j-i+1<len){
                        len = j-i+1;
                        ans = s.substr(i,len);
                        
                    }
                    cnt[s[i]-'A']--;
                    i++;
                }
            }

        }

        return ans;
    }
};
