/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : Abu Bakar Istiak
 * * * * Created : 2025-03-23 || 19:25:11
 * * * * File    : A_Problemsolving_Log.cpp
*/


// https://codeforces.com/problemset/problem/1914/A


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
    ll n; cin >> n;
    vector<ll> v(26,0);
    for(int i=0; i<n; i++){
        char ch; cin >> ch;
        v[ch-'A']++;
    }
    ll res=0;
    for(int i=0; i<26; i++){
        if(v[i]>i){
            res++;
        }
    }
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


// Alhamdulillah---(Ramadan Kareem)
}