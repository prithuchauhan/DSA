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

    string s;
    cin>>s;

    

    string ans = "";

    char insert;

    for(int i=0;i<s.size()-1;i++){
        if (s[i] == s[i+1]){
            if (s[i] != 'z'){
                insert = s[i]+1;
            }
            else{
                insert = 'a';
            }
            ans = s.substr(0,i+1)+insert+s.substr(i+1,s.size()-i-1);
        }
    }

    if (s[0] != 'z'){
        insert = s[0]+1;
        }

    else{
        insert = 'a';
        }

    if (ans == ""){
        ans = insert+s;
    }

    cout<<ans<<endl;

    return 0;
    
}





int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
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
