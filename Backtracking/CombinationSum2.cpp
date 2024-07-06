// QUESTION LINK : https://leetcode.com/problems/combination-sum-ii/

class Solution {
public:

    void recursion(vector<int> &candidates, int target, int n, vector<int> &cur, int ind, vector<vector<int>> &ans,int prev){
        if (ind == n){
            if (target == 0){
                {
                    ans.push_back(cur);
                }
            }

            return;
        }
        if (target<0){
            return;
        }

        if (target == 0){
            
            
                ans.push_back(cur);
                return;
            
        }

        // not pick 
        if (target>0){

        

        
        //pick

        prev = candidates[ind];


        
        cur.push_back(candidates[ind]);
        
        recursion(candidates,target-candidates[ind],n,cur,ind+1,ans,prev);
        cur.pop_back();

        int j = ind;

        while(j<n && candidates[ind] == candidates[j]){
            j++;
        }     // not pick wale se pahle valo main daal diya kunki pick valo main to hoga hi not pick main jaise 1 nahi chaiye to saare 1 hata diye

        recursion(candidates,target,n,cur,j,ans,prev);


        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> cur;

        int n = candidates.size();

        sort(candidates.begin(),candidates.end());

        recursion(candidates,target,n,cur,0,ans,-1);

        

        
        return ans;



        
    }
};
