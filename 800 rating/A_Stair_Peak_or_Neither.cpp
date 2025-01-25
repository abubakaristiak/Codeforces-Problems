/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-25 || 23:29:48
 * * * * File    : A_Stair_Peak_or_Neither.cpp
 */


// https://codeforces.com/problemset/problem/1950/A


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
    int a,b,c; cin >> a >> b >> c;
    if(b>a && b>c){
        cout << "PEAK" << endl;
    }else if(b>a && b<c){
        cout << "STAIR" << endl;
    }else cout << "NONE" << endl;
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    

    return 0;


// Alhamdulillah
}