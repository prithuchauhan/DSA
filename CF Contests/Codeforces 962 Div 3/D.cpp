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

    int n,x;
    cin>>n>>x;



    int cnt = 0;

    for(int a=1;a<=n;a++){
        for(int b=1;b<=n/a;b++){
            if (min((n-(a*b))/(a+b),x-a-b) > 0){

                cnt += min((n-(a*b))/(a+b),x-a-b);

            }
        }
    }
    
    cout<<cnt<<endl;






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
