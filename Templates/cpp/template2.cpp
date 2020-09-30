#include <bits/stdc++.h>
using namespace std;
#define sz(x) static_cast<int>((x).size())
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define fr(i, a, b) for(int i = a; i < b; i++)
typedef vector< long long > vi;
typedef pair<long long, long long> pp;
#define o_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update> 
#define all(x) x.begin(), x.end()
#define rall(x) (x).rbegin(), (x).rend()
#define IO ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define pii pair<int,int>
const int mod = 1e9 + 7;
const int mod1 = 998244353;
template<class T> bool cmn(T &a, T b) { return a > b ? (a = b, true) : false; }
template<class T> bool cmx(T &a, T b) { return a < b ? (a = b, true) : false; }
template <typename A, typename B> string to_string(pair<A, B> p);
template <typename A, typename B, typename C> string to_string(tuple<A, B, C> p);
string to_string(const string& s) { return '"' + s + '"'; }
string to_string(const char* s) { return to_string((string) s); }
string to_string(bool b) { return (b ? "true" : "false"); }
string to_string(vector<bool> v) {
    bool first = true;
    string res = "{";
    for (int i = 0; i < static_cast<int>(v.size()); i++) {
        if (!first) {
            res += ", ";
        }
        first = false;
        res += to_string(v[i]);
    }
    res += "}";
    return res;
}
template <size_t N>
string to_string(bitset<N> v) {
    string res = "";
    for (size_t i = 0; i < N; i++) {
        res.push_back(static_cast<char>('0' + v[i]));
    }
    return res;
}
template <typename A>
string to_string(A v) {
    bool first = true;
    string res = "{";
    for (const auto &x : v) {
        if (!first) {
            res += ", ";
        }
        first = false;
        res += to_string(x);
    }
    res += "}";
    return res;
}
template <typename A, typename B>
string to_string(pair<A, B> p) { return "(" + to_string(p.first) + ", " + to_string(p.second) + ")"; }
template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p) {
    return "(" + to_string(get<0>(p)) + ", " + to_string(get<1>(p)) + ", " + to_string(get<2>(p)) + ")";
}
void debug_out() { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
    cerr << " " << to_string(H);
    debug_out(T...);
}
#ifdef LOCAL
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 0
#endif
void solve(){
    ll x , y;
    cin >> x >> y;
    for(int i = 51 ;i >= 21; i--){
        cout << "U";
            for(int j = 1; j <= i ; j++){
                cout << "R";
            }
            cout << "U";
            for(int j = 1; j <= i; j++){
                cout << "L";
            }           
    }
    for(int i = 51 ;i >= 21; i--){
        cout << "D";
            for(int j = 1; j <= i ; j++){
                cout << "L";
            }
            cout << "U";
            for(int j = 1; j <= i; j++){
                cout << "R";
            }           
    }
    cout << "U";
    for(int j = 1; j <= 500; j++){
        cout << "L";
    }  
    cout << "\n";
}
int main()
{
    IO;
    int t = 1;
    // cin >> t;
    while(t--)
    {
        solve();        
    }
}
