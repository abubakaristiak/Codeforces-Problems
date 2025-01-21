/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-21 || 20:38:42
 * * * * File    : A_Division.cpp
 */


// https://codeforces.com/problemset/problem/1669/A


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
    int n; cin >> n;
    if(n<=1399){
        cout << "Division 4" << endl;
    }else if(n>=1400 && n<=1599){
        cout << "Division 3" << endl;
    }else if(n>=1600 && n<=1899){
        cout << "Division 2" << endl;
    }else cout << "Division 1" << endl;
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