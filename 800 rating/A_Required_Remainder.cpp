/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-15 || 23:26:32
 * * * * File    : A_Required_Remainder.cpp
*/


// https://codeforces.com/problemset/problem/1374/A


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    ll x,y,n; cin >> x >> y >> n;
    ll ans=n-n % x+y;
    if(ans<=n){
        cout << ans << endl;
    }else{
        cout << (n-n % x-(x-y)) << endl;
    }

}


int main()
{
    fast();
    ll t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}