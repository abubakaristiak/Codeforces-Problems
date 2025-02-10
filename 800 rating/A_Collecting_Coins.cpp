/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-02-05 || 13:28:14
 * * * * File    : A_Collecting_Coins.cpp
 */


// https://codeforces.com/problemset/problem/1294/A


#include<bits/stdc++.h>
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
using namespace std;


void solve()
{
    int a,b,c,d; cin >> a >> b >> c >> d;
    int mx=max({a,b,c});
    int required = (mx-a)+(mx-b)+(mx-c);

    if(d>=required && (d-required)%3==0){
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