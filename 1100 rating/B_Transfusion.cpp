/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-04-04 || 23:22:02
 * * * * File    : B_Transfusion.cpp
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


void istiak()
{
    ll n; cin >> n;
    ll even_sum=0, even=0, odd=0, odd_sum=0;
    for(ll i=0; i<n; i++){
        ll x; cin >> x;
        if(i%2==0){
            even++;
            even_sum+=x;
        }else{
            odd++;
            odd_sum+=x;
        }
    }
    if(even_sum%even==0 && odd_sum%odd==0 && (even_sum/even==odd_sum/odd)){
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