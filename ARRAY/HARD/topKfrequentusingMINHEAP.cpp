// QUESTION LINK : https://leetcode.com/problems/top-k-frequent-elements/


class Solution {
public:


    struct order {
        bool operator() (pair<int,int> &a, pair<int,int> &b){
            if (a.second == b.second){
                return a.first>b.first;
            }
            return a.second>b.second;
        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
        }

        priority_queue<pair<int,int>, vector<pair<int,int>> ,order> minHeap ;

        for(auto iter : mp){
            minHeap.push(iter);
            if (minHeap.size()>k){
                minHeap.pop();
            }
        }

        vector<int> ans;
        while(!minHeap.empty()){
            ans.push_back(minHeap.top().first);
            minHeap.pop();
        }

        return ans;
    }
};
