/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-05-02 || 23:12:44
 * * * * File    : A_Divide_it.cpp
*/

// https://codeforces.com/problemset/problem/1176/A

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
#define minus cout << -1 << endl;
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    ll n; cin >> n;
    ll cnt=0;
    while (n%5==0)
    {
        n=(4*n)/5;
        cnt++;
    }
    while (n%3==0)
    {
        n=(2*n)/3;
        cnt++;
    }
    while (n%2==0)
    {
        n/=2;
        cnt++;
    }
    if(n<=1){
        cout << cnt << endl;
    }else minus;
    
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