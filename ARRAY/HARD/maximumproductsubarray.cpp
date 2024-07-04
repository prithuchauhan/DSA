#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<bits/stdc++.h>
#include<array>
#include<vector>
#include<string.h>
#include<cmath>
using namespace std;
using lli = long long;

#define debug(x) cout << #x << " = " << (x) << endl


// one of the hardest questions to pass the testcases : 

// Question LINK : https://leetcode.com/problems/maximum-product-subarray/description/



int maxProduct(vector<int>& nums) 

    {   
        // int product = 1;
        // int ans = INT_MIN;
        // int n = nums.size();
        // for(int i=0;i<n;i++){
        //     product = max(product*nums[i],nums[i]);
        //     ans = max(ans,product);
        // }

        // return ans;

        // kadane's algo for sum doesnt work here because two negatives give positive hence recursion and dp. or just common sense

        // RECURSION

        int n = nums.size();
        int cnt = 0;

        vector<int> zero;

        for(int i=0;i<n;i++){
            if (nums[i]==0){
                zero.push_back(i);
            }
        }

        vector<pair<int,int>> subarrays;

        int start = 0;

        for(int i=0;i<n;i++){
            if (nums[i] != 0){
                start = i;
                break; 
            }
        }



        for(auto iter : zero){
            
            if (iter>0){
                subarrays.push_back(make_pair(start,iter-1));
                start = iter+1;
            }

            
        }

        if (start<n){
                subarrays.push_back(make_pair(start,n-1));
            }

        for(auto iter : subarrays){
            cout<<iter.first<<" "<<iter.second<<" ";
            cout<<endl;
        }

        int product = 1;

        int maxpro = INT_MIN;

        

        for(auto iter : subarrays){
            int negcnt = 0;
            product = 1;
            int firstneg = INT_MIN;
            int lastneg = INT_MIN;

            int firstpro = 1;
            int lastpro = 1;

            for(int i=iter.first;i<=iter.second;i++){

                if (nums[i]<0){
                    if (firstneg == INT_MIN){
                        firstneg = i;
                        lastneg = i;
                    }
                    if (i>lastneg){
                        lastneg = i;
                    }
                    negcnt++;
                    
                }

                product *= nums[i];
            }

            // debug(product);
                
            if (!(negcnt&1)){
                maxpro = max(product,maxpro);
            }
            if (negcnt&1){

                    if (iter.first == iter.second){
                        firstpro = nums[iter.first];
                        lastpro = nums[iter.first];
                    }
                    else{
                
                        for(int i=iter.first;i<lastneg;i++){
                            firstpro *= nums[i]; 
                        }
                    
                    
                        for(int i=firstneg+1; i<=iter.second;i++){
                            lastpro *= nums[i];
                        }
                    }
                

                // debug(firstpro);
                // debug(lastpro);

                maxpro = max(maxpro,max(firstpro,lastpro));
            }
            
        }



        if (maxpro > 0){
            return maxpro;
        }
        else if (!zero.empty() && maxpro<0){
            return 0;
        }
        else{
            return maxpro;
        }


        



        
    }


int main(){

    vector<int> nums = {0,2};

    cout<<maxProduct(nums)<<endl;

    

    return 0;

}