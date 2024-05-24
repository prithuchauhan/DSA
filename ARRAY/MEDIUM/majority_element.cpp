#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>

using namespace std;
using ll = long long;

int majorityElement(vector<int>& nums) {             //easy hashmap way

    map<int,int> hashmap;
    int ans = 0;

    for(int i=0;i<nums.size();i++){
        hashmap[nums[i]]++;
        if (hashmap[nums[i]] > floor(nums.size()/2)){
            return (nums[i]);
        }
    }

    return ans;


    }

    // MOORE'S VOTING ALGORITHM 

int majorityElementOptimal(vector<int>& nums) {             // Optimal way without storing 

    // IDEA : if (v[i] == element then cnt++)
    // if different than element then decrease count;
    // if count = 0; element = v[i];
    // only works when one element in majority i.e. greater than n/2

    int cnt = 0;
    int element = -1011;

    for(int i=0; i<nums.size();i++){
        if (cnt == 0){
            element = nums[i];
            cnt++;
        }
        else if (nums[i] == element){
            cnt++;
        }
        else{
            cnt--;
        }
        
    }  

    return element; 

    


    }


int main(){

    vector<int> nums = {2,2,1,1,1,2,2};

    cout<<majorityElementOptimal(nums);

    return 0;

}