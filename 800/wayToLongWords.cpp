#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value,
typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep;
for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void solve() {

    int x;
    cin >> x;

    std::vector <std::string> v;

    if( x > 0 && x < 101){
        for(int i = 0; i < x; ++i){
            string s;
            cin >> s;
            v.push_back(s);
        }

        for(int i = 0; i < x; ++i){
            if(v[i].size() > 0 && v[i].size() < 101){

                if(v[i].size() > 10){

                    std::string str = std::to_string(v[i].size()-2);
                    std::string s1;
                    std::string s2;

                    s1 += v[i][0];
                    s2 += v[i][v[i].size()-1];

                    cout << s1 + str + s2<< endl;
                }else{
                    cout << v[i] << endl;
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
