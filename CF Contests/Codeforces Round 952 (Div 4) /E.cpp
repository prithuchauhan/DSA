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


pair<int, int> findCenter(vector<vector<char>>& grid, int n, int m) {
    int sum_i = 0, sum_j = 0, count = 0;


    vector<pair<int, int>> points;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '#') {
                points.push_back({i, j});
                sum_i += i;
                sum_j += j;
                count++;
            }
        }
    }


    int h = round(sum_i/(double)count) + 1;
    int k = round(sum_j/(double)count) + 1;

    return {h, k};
}

vector<tuple<int, int, int>> find_factors(int k) {
    vector<tuple<int, int, int>> factors;
    for (int a = 1; a * a * a <= k; ++a) {
        if (k % a == 0) {
            int remainder = k / a;
            for (int b = 1; b * b <= remainder; ++b) {
                if (remainder % b == 0) {
                    int c = remainder / b;
                    factors.push_back(make_tuple(a, b, c));
                    if (b != c) {
                        factors.push_back(make_tuple(a, c, b));
                    }
                }
            }
        }
    }
    return factors;

}



int solve(int tc)
{   
    int x, y, z, k;
    cin >> x >> y >> z >> k;

    vector<tuple<int, int, int>> factors = find_factors(k);
    int max_positions = 0;

    for (auto &[a, b, c] : factors) {
        if (a <= x && b <= y && c <= z) {
            int positions = (x - a + 1) * (y - b + 1) * (z - c + 1);
            max_positions = max(max_positions, positions);
        }
        if (a <= x && c <= y && b <= z) {
            int positions = (x - a + 1) * (y - c + 1) * (z - b + 1);
            max_positions = max(max_positions, positions);
        }
        if (b <= x && a <= y && c <= z) {
            int positions = (x - b + 1) * (y - a + 1) * (z - c + 1);
            max_positions = max(max_positions, positions);
        }
        if (b <= x && c <= y && a <= z) {
            int positions = (x - b + 1) * (y - c + 1) * (z - a + 1);
            max_positions = max(max_positions, positions);
        }
        if (c <= x && a <= y && b <= z) {
            int positions = (x - c + 1) * (y - a + 1) * (z - b + 1);
            max_positions = max(max_positions, positions);
        }
        if (c <= x && b <= y && a <= z) {
            int positions = (x - c + 1) * (y - b + 1) * (z - a + 1);
            max_positions = max(max_positions, positions);
        }
    }

    cout << max_positions << endl;
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
