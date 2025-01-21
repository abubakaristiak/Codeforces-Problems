/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-21 || 20:50:48
 * * * * File    : A_Restoring_Three_Numbers.cpp
 */


// https://codeforces.com/problemset/problem/1154/A



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
    vector<int> v(4);
    for(int i=0; i<4; i++){
        cin >> v[i];
    }
    asort(v);
    int a=v[3]-v[0];
    int b=v[3]-v[1];
    int c=v[3]-v[2];
    cout << a << " " << b << " " << c << endl;
}


int main()
{
    fast();
    solve();

    return 0;


// Alhamdulillah
}