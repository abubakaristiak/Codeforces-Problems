/*
||-----------------------------------||
||        Abu Bakar Istiak           ||
||     Chattogram Polytechnic        ||
||        Department of CST          ||
||    abubakar119147@gmail.com       ||
||-----------------------------------||
*/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ull unsigned long long
#define pi pair<ll, ll>
#define vi vector<ll>
#define vpi vector<pi>
#define pb push_back
#define endl "\n"
#define sp " "
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define sz(x) (ll)(x).size()
#define minus cout << -1 << endl
#define zero cout << 0 << endl
#define MAX 100000
#define MOD 998244353
#define afor(i,a,b) for (ll i = (a); i < (b); ++i)
#define rfor(i,a,b) for (ll i = (a); i >= (b); --i)
#define asort(v) sort((v).begin(), (v).end())
#define rsort(v) sort((v).begin(), (v).end(), greater<>())
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    int n,q; cin >> n >> q;
    string a,b; cin >> a >> b;
    vector<vector<int>> a_pre(n+1, vector<int>(26,0));
    vector<vector<int>> b_pre(n+1, vector<int>(26,0));
    for(int i=1; i<=n; i++){
        a_pre[i][a[i-1]-'a']++;
        b_pre[i][b[i-1]-'a']++;
        for(int j=0; j<26; j++){
            a_pre[i][j] += a_pre[i-1][j];
            b_pre[i][j] += b_pre[i-1][j];
        }
    }
    while (q--){
        int l,r; cin >> l >> r;
        int dif=0;
        for(int i=0; i<26; i++){
            int val1 = a_pre[r][i]-a_pre[l-1][i];
            int val2 = b_pre[r][i]-b_pre[l-1][i];
            dif+=abs(val1-val2);
        }
        cout << dif/2 << endl;
    }
    
}


int main() {
    fast();
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;

    // Alhamdulillah
}