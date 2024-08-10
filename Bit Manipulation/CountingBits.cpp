// Question Link : https://leetcode.com/problems/counting-bits/

class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> ans;

        for(int i=0;i<=n;i++){
            int num = 0;
            for(int bit=0;bit<17;bit++){
                if ((i>>bit)&1){
                    num++;
                }
            }

            ans.push_back(num);
        }

        return ans;
    }
};
