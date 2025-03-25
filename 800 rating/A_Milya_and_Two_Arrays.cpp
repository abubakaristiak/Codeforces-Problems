/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-25 || 23:25:14
 * * * * File    : A_Milya_and_Two_Arrays.cpp
*/


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


void solve()
{
    ll n; cin >> n;
    vector<ll> v1(n), v2(n);
    for(ll &num:v1){
        cin >> num; 
    }
    for(ll &num:v2){
        cin >> num;
    }
    map<ll, ll> mp;
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            mp[v1[i]+v2[j]]++;
        }
    }

    if(mp.size()>=3){
        yes;
    }else no;


    
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