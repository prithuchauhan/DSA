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


#define F first
#define S second
#define all(x) begin(x), end(x)
#define int long long
#define fr(start, end) for (int i = (start); i < (end); ++i)

#define frn(end,start) for(int i=end ; i>start ; i--)

#define nmod        1000000007





using lli = long long;
using ld = long double;
long long INF = LLONG_MAX;
long long neg_INF = LLONG_MIN;
constexpr lli MOD = 1e9 + 7;



int GCD(int a, int b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

int LCM(int a, int b)
{
    return ((lli)a * b) / GCD(a, b);
}

lli modpow(lli x, lli n, int m = MOD)
{
    if (x == 0 && n == 0)
        return 0; 
    lli res = 1;
    while (n > 0)
    {
        if (n % 2)
            res = (res * x) % m;
        x = (x * x) % m;
        n /= 2;
    }
    return res;
}

int m_expo(int x, int y) { int res = 1; while (y) {if (y % 2) res = (res * x % nmod) % nmod; x = (x * x) % nmod; y /= 2; } return res;}
int m_inv(int x)         {return m_expo(x, nmod - 2);}
int m_add(int a, int b)  {a = a % nmod; b = b % nmod; return (((a + b) % nmod) + nmod) % nmod;}
int m_sub(int a, int b)  {a = a % nmod; b = b % nmod; return (((a - b) % nmod) + nmod) % nmod;}
int m_mul(int a, int b)  {a = a % nmod; b = b % nmod; return (((a * b) % nmod) + nmod) % nmod;}
int m_div(int a, int b)  {a = a % nmod; b = b % nmod; return (m_mul(a, m_inv(b)) + nmod) % nmod;}

int fact(int n)          {int res = 1; for(int i=1; i<=n; i++) { res = m_mul(res, i); } return res; }
int nCr(int n, int r)    {int res = 1; for(int i=0; i<r; i++) { res = m_mul(res, (n-i)); res = m_div(res, (i+1)); } return res;}
int nPr(int n, int r)    { return fact(n)/fact(n-r); }


template <typename T>
void print(T&& t) { cout << t << "\n"; }
template <typename T, typename... Args>
void print(T&& t, Args &&...args)
{
    cout << t << " ";
    print(forward<Args>(args)...);
}



template <typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream& istream, pair<T1, T2>& p)
{
    return (istream >> p.first >> p.second);
}
 
template <typename T> // cin >> vector<T>
istream& operator>>(istream& istream, vector<T>& v)
{
    for (auto& it : v)
        istream >> it;
    return istream;
}
 
template <typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream& ostream, const pair<T1, T2>& p)
{
    return (ostream << p.first << " " << p.second);
}
template <typename T> // cout << vector<T>
ostream& operator<<(ostream& ostream, const vector<T>& c)
{
    for (auto& it : c)
        cout << it << " ";
    return ostream;
}

template <typename T>
void printElements(const vector<T>& elements) {
    for (const auto& element : elements) {
        std::cout << element << " ";
    }
    
}


template <typename T>
T max_element(vector<T>& vec) {
    if (vec.empty()) {
        std::cerr << "Error: Vector is empty." << std::endl;
        exit(EXIT_FAILURE);
    }

    T maxElement = vec[0];

    fr(0, vec.size()) {
        if (vec[i] > maxElement) {
            maxElement = vec[i];
        }
    }

    return maxElement;
}

template <typename T>
T min_element(const std::vector<T>& vec) {
    if (vec.empty()) {
        std::cerr << "Error: Vector is empty." << std::endl;
        exit(EXIT_FAILURE);
    }

    T minElement = vec[0];

    fr(0, vec.size()) {
        if (vec[i] < minElement) {
            minElement = vec[i];
        }
    }

    return minElement;
}
template <typename T>
    void Vsort(std::vector<T>& vec) {
        std::sort(vec.begin(), vec.end());
    }

    template <typename T>
    void DesVsort(std::vector<T>& vec) {
        std::sort(vec.begin(), vec.end(), std::greater<T>());
    }

template <typename T>
T findMin(T first) {
    return first;
}

template <typename T, typename... Args>
T findMin(T first, Args... args) {
    return std::min(first, findMin(args...));
}

template <typename T>
T findMax(T first) {
    return first;
}

template <typename T, typename... Args>
T findMax(T first, Args... args) {
    return std::max(first, findMax(args...));
}

template<typename T>
T vsum(const std::vector<T>& vec) {
    T sum = 0;
    for (const auto& elem : vec) {
        sum += elem;
    }
    return sum;
}

int bsearch(vector<int> &v, int size, int target){
        int l = 0;
        int h = size-1;
        

        while(l<=h){

            int mid = (l+h)/2;

            if (v[mid] == target){
                return mid+1;
            }

            else if(v[mid]>target){
                h = mid-1;
            }

            else{
                l = mid+1;
            }

        }

        return -1;

        
        
    }



int solve(int tc)
{
    int n,m;
    cin>>n>>m;

    string s;
    cin>>s;

    map<char,int> cmap;

    cmap['A'] = 0;
    cmap['B'] = 0;
    cmap['C'] = 0;
    cmap['D'] = 0;
    cmap['E'] = 0;
    cmap['F'] = 0;
    cmap['G'] = 0;

    for(int i=0;i<s.size();i++){
        cmap[s[i]]++;
    }

    // for(auto iter : cmap){
    //     cout<<iter.first<<" "<<iter.second<<endl;
    // }

    int count = 0;

    for(auto iter : cmap){
        if(m-iter.second > 0){
            count = count+(m-iter.second);
        }
    }
    
    cout<<count<<endl;


    

    return 0;
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout << setprecision(12) << fixed;
 


    int tests = 1;
    cin >> tests;
    for (int tt = 1; tt <= tests; tt++)
        solve(tt);
    return 0;
}
