// QUESTION LINK : https://neetcode.io/problems/string-encode-and-decode


class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        for(int i=0;i<strs.size();i++){
            encoded += to_string(strs[i].size());
            encoded += '#';
            encoded += strs[i];
        }

        return encoded;
        
    }

    vector<string> decode(string s) {
        vector<string> ans;



        

        int i=0;
        while(i<s.size()){
            int j = i;

            while (s[j] != '#'){
                j++;
            }

            
                int len = stoi(s.substr(i,j-i));    // length can be greater than 9 dumbass.
                string subans = s.substr(j+1,len);
                ans.push_back(subans);
                i = j+1+len;
            
        }
        
        
        return ans;
        
    }


};
