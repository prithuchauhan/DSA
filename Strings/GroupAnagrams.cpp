// https://leetcode.com/problems/group-anagrams/


class Solution {
public:

    string getKey(string s){
        vector<int> cnt(26,0);

        for(int i=0;i<s.size();i++){
            cnt[s[i]-'a']++;
        }

        string key = "";

        for(int i=0;i<26;i++){
            string subans(cnt[i],char('a'+i));
            key += subans;
        }

        return key;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>> mp;

        for(auto iter : strs){

            string key = getKey(iter);
            mp[key].push_back(iter);
        }

        vector<vector<string>> ans;

        for(auto iter : mp){
            vector<string> subanswer;
            for(auto strings : iter.second){
                subanswer.push_back(strings);
            }

            ans.push_back(subanswer);
        }

        return ans;
    }
};
