/*
||-----------------------------------||
||        Abu Bakar Istiak           ||
||     Chattogram Polytechnic        ||
||        Department of CST          ||
||    abubakar119147@gmail.com       ||
||-----------------------------------||
*/

// https://codeforces.com/problemset/problem/1668/B

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
    ll n,m; cin >> n >> m;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    asort(v);
    ll s=0;
    for(ll i=0; i<n; i++){
        if(i==0){
            s+=v[i]*2;
            continue;
        }
        if(v[i]>v[i-1]){
            s+=v[i]+v[i]-v[i-1];
        }else{
            s+=v[i];
        }
    }
    s+=n;
    s-=v[n-1];
    if(v[0]<v[n-1]){
        s+=v[n-1]-v[0];
    }
    if(s<=m){
        yes;
    }else no;
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