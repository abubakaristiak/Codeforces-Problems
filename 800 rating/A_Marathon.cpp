/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-01-22 || 23:11:54
 * * * * File    : A_Marathon.cpp
 */



// https://codeforces.com/problemset/problem/1692/A


 
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
    int ar[4]={a,b,c,d};
    int cnt=0;
    for(int i=1; i<4; i++){
        if(ar[i]>ar[0]){
            cnt++;
        }
    }
    cout << cnt << endl;
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