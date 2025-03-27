/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : Abu Bakar Istiak
 * * * * Created : 2025-03-26 || 18:51:13
 * * * * File    : A. MEX Destruction.CPP
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
    ll n; cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }

    ll cnt=0, zeroCnt=0;
    for(ll i=0; i<n; i++){
        if(v[i]!=0 && !zeroCnt){
            cnt++;
            zeroCnt=1;
        }
        if(v[i]==0){
            zeroCnt=0;
        }
    }
    if(cnt>2){
        cout << 2 << endl;
    }else cout << cnt << endl;
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