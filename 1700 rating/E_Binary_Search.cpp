/*
||-----------------------------------||
||        Abu Bakar Istiak           ||
||     Chattogram Polytechnic        ||
||        Department of CST          ||
||    abubakar119147@gmail.com       ||
||-----------------------------------||
*/

// https://codeforces.com/contest/1945/problem/E

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
    ll n,x; cin >> n >> x;
    vector<ll> v(n+1);
    ll idx;
    for(ll i=1; i<=n; i++){
        cin >> v[i];
        if(v[i]==x){
            idx=i;
        }
    }
    cout << 2 << endl;
    swap(v[1], v[idx]);
    cout << 1 << " " << idx << endl;

    ll l=1, r=n+1;
    while (r-l>1)
    {
        ll mid=(l+r)/2;
        if(v[mid]<=x){
            l=mid;
        }else r=mid;
    }
    swap(v[1], v[l]);
    cout << 1 << " " << l << endl;
    
}

int main() {
    fast();
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;

    // Alhamdulillah
}