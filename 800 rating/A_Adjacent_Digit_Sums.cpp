/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-15 || 16:18:52
 * * * * File    : A_Adjacent_Digit_Sums.cpp
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
    ll x,y; cin >> x >> y;
    ll ans=x-y+1;
    bool ok=false;
    if(y==x+1){
        ok=true;
    }else if(ans>0 && ans%9==0){
        ok=true;
    }
    if(ok){
        cyes;
    }else cno;
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