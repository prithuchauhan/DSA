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

    int n;
    cin>>n;

    int ans = 0;


    vector<char> row1(n);
    vector<char> row2(n);

    for(int i=0;i<n;i++){
        cin>>row1[i];
    }

    for(int i=0;i<n;i++){
        cin>>row2[i];
    }

    int start = 0;
    int end = n-1;

    while(row1[start] == 'x' && row2[start] == 'x'){
        start++;
    }

    while(row1[end] == 'x' && row2[end] == 'x'){
        end--;
    }

    if (start>=end){
        cout<<ans<<endl;
    }
    else{
        for(int i=start;i<=end-2;i++){
            if (row1[i] == 'x' && row1[i+2] == 'x'){
                if (row1[i+1] == '.' && row2[i+1] == '.'){
                    ans ++;
                }
            }
            if (row2[i] == 'x' && row2[i+2] == 'x'){
                if (row1[i+1] == '.' && row2[i+1] == '.'){
                    ans ++;
                }
            }
        }

        cout<<ans<<endl;
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
