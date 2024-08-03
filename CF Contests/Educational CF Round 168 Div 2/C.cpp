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

    int opening = 0;
    int closing = 0;

    vector<char> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];

    }

    v[0] = '(';

    for(int i=0;i<n;i++){
        if (v[i] == '('){
            opening++;
        }
        else if (v[i] == ')'){
            closing++;
        }
        else{
            if (opening == closing){
                v[i] = '(';
                opening++;
            }
            else{
                v[i] = ')';
                closing++;
            }
        }
    }

    stack <int> st;
    int ans = 0;

    for(int i=0;i<n;i++){
        if (v[i] == '('){
            st.push(i);
        }
        else{
            if (!st.empty()){
                ans += i-st.top();
                st.pop();
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
