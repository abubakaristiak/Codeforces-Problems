/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-05-05 || 09:25:19
 * * * * File    : B_Red_and_Blue.cpp
*/

// https://codeforces.com/contest/1469/problem/B

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
#define sz(x) x.size()
#define endl "\n"
#define afor(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define rfor(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    int n; cin >> n;
    int mx1=0, cnt1=0;
    vector<int> a(n);
    afor(i,0,n){
        cin >> a[i];
        cnt1+=a[i];
        mx1=max(mx1, cnt1);
    }
    int m; cin >> m;
    int mx2=0, cnt2=0;
    vector<int> b(m);
    afor(i,0,m){
        cin >> b[i];
        cnt2+=b[i];
        mx2=max(mx2, cnt2);
    }
    int res=mx1+mx2;
    cout << res << endl;
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