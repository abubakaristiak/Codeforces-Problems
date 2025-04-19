/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-19 || 23:22:31
 * * * * File    : B_Seating_in_a_Bus.cpp
*/

// https://codeforces.com/problemset/problem/2000/B

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
    int n; cin >> n;
    vector<int> v(n+1), v2(n+2);
    for(int i=1; i<=n; i++){
        cin >> v[i];
    }

    bool ok=true;
    v2[v[1]]=v[1];
    for(int i=2; i<=n; i++){
        v2[v[i]]=v[i];
        if(v2[v[i]-1]>0 || v2[v[i]+1]>0){
            ok=true;
        }else{
            ok=false;
            break;;
        }
    }
    if(ok){
        yes;
    }else no;
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}