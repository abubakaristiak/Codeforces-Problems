/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-26 || 23:11:47
 * * * * File    : A_Vasya_the_Hipster.cpp
 */



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
    int a,b; cin >> a >> b;
    int day=min(a,b);
    int remain = abs(a-b)/2;
    cout << day << " " << remain << endl;
}


int main()
{
    fast();
    solve();

    return 0;


// Alhamdulillah
}