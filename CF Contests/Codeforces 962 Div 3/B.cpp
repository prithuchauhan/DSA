#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<bits/stdc++.h>
#include<array>
#include<vector>
#include<string.h>
#include<cmath>
#include<fstream>
#include<iomanip>
using namespace std;

#define debug(x) cout << #x << " = " << (x) << endl

#define int long long
long long INF = LLONG_MAX;
long long neg_INF = LLONG_MIN;




int solve(int tc)
{   
    int n,k;
    cin>>n>>k;

    vector<vector<int>> matrix(n, vector<int>(n));

    
    for(int i = 0; i < n; i++){
        string row;
        cin >> row;
        for(int j = 0; j < n; j++){
            matrix[i][j] = row[j] - '0';
        }
    }


    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    vector<vector<int>> ans;

    for(int i = 0; i < n; i += k){
        vector<int> subv;
        for(int j = 0; j < n; j += k){
            subv.push_back(matrix[i][j]);
        }
        ans.push_back(subv);
    }


    for(auto iter : ans){
        for(auto el : iter){
            cout<<el;
        }
        cout<<endl;
    }

    return 0;
    
}





int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout << setprecision(12) << fixed;

    
 
    #ifndef ONLINE_JUDGE
    std::freopen("input.txt", "r", stdin);
    std::freopen("output.txt", "w", stdout);
    #endif


    int tests = 1;
    cin >> tests;
    for (int tt = 1; tt <= tests; tt++)
        solve(tt);
    return 0;
}
