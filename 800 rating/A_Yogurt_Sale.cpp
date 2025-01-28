/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-29 || 00:29:22
 * * * * File    : A_Yogurt_Sale.cpp
 */


// https://codeforces.com/problemset/problem/1955/A


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
    int n,a,b; cin >> n >> a >> b;

    if(2*a<b){
        cout << n*a << endl;
    }else{
        int buy=n/2;
        int remain=n%2;
        int res = buy*b + remain*a;
        cout << res << endl;
    }
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