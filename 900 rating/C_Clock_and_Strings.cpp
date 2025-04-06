/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-06 || 21:14:55
 * * * * File    : C_Clock_and_Strings.cpp
*/


// https://codeforces.com/problemset/problem/1971/C


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void istiak()
{
    ll a,b,c,d; cin >> a >> b >> c >> d;
    ll mn=min(a,b);
    ll mx=max(a,b);
    ll cnt=0;
    for(ll i=mn; i<=mx; i++){
        if((i==c) || (i==d)){
            cnt++;
        }
    }
    if(cnt==1){
        yes;
    }else no;
}


int main()
{
    fast();
    int t; cin >> t;
    while (t--) {
        istiak();
    }

    return 0;


// Alhamdulillah
}