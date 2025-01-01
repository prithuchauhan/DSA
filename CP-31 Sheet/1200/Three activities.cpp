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

    vector<int> a(n),b(n),c(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    for(int i=0;i<n;i++){
        cin>>c[i];
    }

    vector<int> na(n),nb(n),nc(n);

    iota(na.begin(),na.end(),0);
    iota(nb.begin(),nb.end(),0);
    iota(nc.begin(),nc.end(),0);

    sort(na.begin(),na.end(), [&] (int i,int j) {return a[i]>a[j];});

    sort(nb.begin(),nb.end(), [&] (int i,int j) {return b[i]>b[j];});

    sort(nc.begin(),nc.end(), [&] (int i,int j) {return c[i]>c[j];});

    int ans = 0;

    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                if (na[i] != nb[j] && nb[j]!= nc[k] && nc[k] != na[i] ){
                    ans = max(ans, a[na[i]] + b[nb[j]] + c[nc[k]]);
                    }
            }
        }
    }

    cout<<ans<<endl;

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
