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

    int n,q;
    cin>>n>>q;

    string s;
    string t;

    cin>>s>>t;

    vector<vector<int>> cnt1(n,vector<int>(26));
    vector<vector<int>> cnt2(n,vector<int>(26));

   

    cnt1[0][s[0]-'a']++;
    cnt2[0][t[0]-'a']++;

    for(int i=1;i<n;i++){
        for(int j=0;j<26;j++){
            cnt1[i][j] = cnt1[i-1][j];
        }
        cnt1[i][s[i]-'a']++;
        for(int j=0;j<26;j++){
            cnt2[i][j] = cnt2[i-1][j];
        }
        cnt2[i][t[i]-'a']++;

    }

    // for(auto iter : cnt2){
    //     for(auto it : iter){
    //         cout<<it<<" ";
    //     }
    //     cout<<endl;
    // }

        

    for(int i=0;i<q;i++){

        int l,r;
        cin>>l>>r;

        l = l-1;
        r = r-1;

        int ans = 0;

        if (l == 0){
            for(int i=0;i<26;i++){
                int dif = cnt2[r][i] - cnt1[r][i];
                if (dif>0){
                    ans += dif;
                }
            }

            cout<<ans<<endl;

        }
        else{

            vector<int> v1;
            vector<int> v2;
            l--;

            for(int i=0;i<26;i++){
            
                v1.push_back(cnt1[r][i]-cnt1[l][i]);
                v2.push_back(cnt2[r][i]-cnt2[l][i]);

                }

            

            for(int i=0;i<26;i++){
                int dif = v2[i]-v1[i];
                if (dif>0){
                    ans += dif;
                }
            }

            cout<<ans<<endl;
        }
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
